/*************************************************************************
> File Name: TaskAgent.h
> Project Name: Hearthstonepp
> Author: Young-Joong Kim
> Purpose: Agent for managing Task Unit
> Created Time: 2018/05/20
> Copyright (c) 2018, Young-Joong Kim
*************************************************************************/
#ifndef HEARTHSTONEPP_TASKAGENT_H
#define HEARTHSTONEPP_TASKAGENT_H

#include <Managers/Player.h>
#include <Managers/SyncBuffer.h>
#include <Tasks/TaskMeta.h>
#include <Tasks/TaskSerializer.h>
#include <Tasks/Tasks.h>

#include <vector>

namespace Hearthstonepp
{
class TaskAgent
{
 public:
    TaskAgent() = default;

    // Non copy-assignable class
    TaskAgent(TaskAgent&&) = delete;
    TaskAgent(const TaskAgent&) = delete;

    TaskAgent& operator=(TaskAgent&&) = delete;
    TaskAgent& operator=(const TaskAgent&) = delete;

    // Read TaskMeta from SyncBuffer, main channel as default, side channel by
    // true flag
    void Read(TaskMeta& meta, bool sideChannel = false);
    // Write TaskMeta from SyncBuffer, main channel as default, side channel by
    // true flag
    void Notify(TaskMeta&& meta, bool sideChannel = false);

    // Run single task and write result to `meta`,
    // if `notify` is true, TaskAgent notify the SyncBuffer to main channel
    void Run(TaskMeta& meta, Player& player1, Player& player2,
             const ITask& task, bool notify = true);
    // Run Multi task and write result to `meta`
    template <typename... ITaskT>
    void Run(TaskMeta& meta, Player& player1, Player& player2,
             const ITaskT&... tasks)
    {
        std::vector<TaskMeta> pool;
        Run(pool, player1, player2, tasks...);

        Notify(Serializer::CreateTaskMetaVector(pool));
    }

 private:
    SyncBuffer<TaskMeta> m_syncBuffer;
    SyncBuffer<TaskMeta> m_sideChannel;

    template <typename... ITaskT>
    void Run(std::vector<TaskMeta>& pool, Player& player1, Player& player2,
             const ITaskT&... tasks)
    {
        auto pusher = [&, this](const ITask& task) -> void {
            pool.emplace_back();
            TaskMeta& meta = pool.back();

            task.Run(player1, player2, meta);
            if (task.GetTaskID() == +TaskID::BRIEF)
            {
                Notify(TaskMeta::CopyFrom(meta));
            }
        };
        (pusher(tasks), ...);
    }
};
}  // namespace Hearthstonepp

#endif  // HEARTHSTONEPP_TASKAGENT_H

﻿// This code is based on Sabberstone project.
// Copyright (c) 2017-2019 SabberStone Team, darkfriend77 & rnilva
// Hearthstone++ is hearthstone simulator using C++ with reinforcement learning.
// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

#include <Rosetta/PlayMode/CardSets/DarkmoonFaireCardsGen.hpp>
#include <Rosetta/PlayMode/Enchants/Enchants.hpp>
#include <Rosetta/PlayMode/Tasks/SimpleTasks/AddEnchantmentTask.hpp>
#include <Rosetta/PlayMode/Tasks/SimpleTasks/ArmorTask.hpp>
#include <Rosetta/PlayMode/Tasks/SimpleTasks/DamageTask.hpp>
#include <Rosetta/PlayMode/Tasks/SimpleTasks/HealTask.hpp>
#include <Rosetta/PlayMode/Tasks/SimpleTasks/SummonTask.hpp>

using namespace RosettaStone::PlayMode;
using namespace SimpleTasks;

namespace RosettaStone::PlayMode
{
using PlayReqs = std::map<PlayReq, int>;

void DarkmoonFaireCardsGen::AddHeroes(std::map<std::string, CardDef>& cards)
{
}

void DarkmoonFaireCardsGen::AddHeroPowers(std::map<std::string, CardDef>& cards)
{
}

void DarkmoonFaireCardsGen::AddDruid(std::map<std::string, CardDef>& cards)
{
    Power power;

    // ------------------------------------------ SPELL - DRUID
    // [DMF_057] Lunar Eclipse - COST:2
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: Deal 3 damage to a minion.
    //       Your next spell this turn costs (2) less.
    // --------------------------------------------------------

    // ------------------------------------------ SPELL - DRUID
    // [DMF_058] Solar Eclipse - COST:2
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: Your next spell this turn casts twice.
    // --------------------------------------------------------

    // ----------------------------------------- MINION - DRUID
    // [DMF_059] Fizzy Elemental - COST:9 [ATK:10/HP:10]
    // - Race: Elemental, Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Rush</b>
    //       <b>Taunt</b>
    // --------------------------------------------------------
    // GameTag:
    // - RUSH = 1
    // - TAUNT = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(nullptr);
    cards.emplace("DMF_059", CardDef(power));

    // ----------------------------------------- MINION - DRUID
    // [DMF_060] Umbral Owl - COST:7 [ATK:4/HP:4]
    // - Race: Beast, Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Rush</b>
    //       Costs (1) less for each spell
    //       you've cast this game.
    // --------------------------------------------------------
    // GameTag:
    // - RUSH = 1
    // --------------------------------------------------------

    // ----------------------------------------- MINION - DRUID
    // [DMF_061] Faire Arborist - COST:3 [ATK:2/HP:2]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Choose One - </b>Draw a card;
    //       or Summon a 2/2 Treant.
    //       <b>Corrupt:</b> Do both.
    // --------------------------------------------------------
    // GameTag:
    // - CHOOSE_ONE = 1
    // - CORRUPT = 1
    // --------------------------------------------------------

    // ------------------------------------------ SPELL - DRUID
    // [DMF_075] Guess the Weight - COST:2
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: Draw a card.
    //       Guess if your next card costs more or less to draw it.
    // --------------------------------------------------------

    // ------------------------------------------ SPELL - DRUID
    // [DMF_730] Moontouched Amulet - COST:3
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: Give your hero +4 Attack this turn.
    //       <b>Corrupt:</b> And gain 6 Armor.
    // --------------------------------------------------------
    // GameTag:
    // - CORRUPT = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(
        std::make_shared<AddEnchantmentTask>("DMF_730e", EntityType::HERO));
    cards.emplace("DMF_730", CardDef(power, "DMF_730t"));

    // ------------------------------------------ SPELL - DRUID
    // [DMF_732] Cenarion Ward - COST:8
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: Gain 8 Armor. Summon a random 8-Cost minion.
    // --------------------------------------------------------

    // ----------------------------------------- MINION - DRUID
    // [DMF_733] Kiri, Chosen of Elune - COST:4 [ATK:2/HP:2]
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Add a Solar Eclipse and
    //       Lunar Eclipse to your hand.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // ----------------------------------------- MINION - DRUID
    // [DMF_734] Greybough - COST:5 [ATK:4/HP:6]
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: <b>Taunt</b> <b>Deathrattle:</b> Give a random
    //       friendly minion "<b>Deathrattle:</b> Summon Greybough."
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - DEATHRATTLE = 1
    // - TAUNT = 1
    // --------------------------------------------------------
}

void DarkmoonFaireCardsGen::AddDruidNonCollect(
    std::map<std::string, CardDef>& cards)
{
    Power power;

    // ------------------------------------ ENCHANTMENT - DRUID
    // [DMF_057e] Lunar Empowerment - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: The next spell you cast costs (2) less.
    // --------------------------------------------------------

    // ------------------------------------ ENCHANTMENT - DRUID
    // [DMF_057o] Lunar Empowerment - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: The next spell you cast this turn costs (2) less.
    // --------------------------------------------------------
    // GameTag:
    // - TAG_ONE_TURN_EFFECT = 1
    // --------------------------------------------------------

    // ------------------------------------ ENCHANTMENT - DRUID
    // [DMF_058e] Solar Empowerment - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Your next spell this turn casts twice.
    // --------------------------------------------------------
    // GameTag:
    // - TAG_ONE_TURN_EFFECT = 1
    // --------------------------------------------------------

    // ------------------------------------ ENCHANTMENT - DRUID
    // [DMF_058o] Solar Empowerment - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Your next spell this turn casts twice.
    // --------------------------------------------------------
    // GameTag:
    // - TAG_ONE_TURN_EFFECT = 1
    // --------------------------------------------------------

    // ------------------------------------------ SPELL - DRUID
    // [DMF_061a] Prune the Fruit - COST:3
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Draw a card.
    // --------------------------------------------------------

    // ------------------------------------------ SPELL - DRUID
    // [DMF_061b] Dig It Up - COST:3
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Summon a 2/2 Treant.
    // --------------------------------------------------------

    // ----------------------------------------- MINION - DRUID
    // [DMF_061t] Faire Arborist - COST:3 [ATK:2/HP:2]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       <b>Battlecry:</b> Summon a 2/2 Treant. Draw a card.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // ----------------------------------------- MINION - DRUID
    // [DMF_061t2] Treant - COST:2 [ATK:2/HP:2]
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------

    // ------------------------------------------ SPELL - DRUID
    // [DMF_075a] More! - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Guess that the next card costs more.
    // --------------------------------------------------------
    // RefTag:
    // - WINDFURY = 1
    // --------------------------------------------------------

    // ------------------------------------------ SPELL - DRUID
    // [DMF_075a2] Less! - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Guess that the next card costs less.
    // --------------------------------------------------------
    // RefTag:
    // - WINDFURY = 1
    // --------------------------------------------------------

    // ------------------------------------ ENCHANTMENT - DRUID
    // [DMF_730e] Moontouched Amulet - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +4 Attack this turn.
    // --------------------------------------------------------
    // GameTag:
    // - TAG_ONE_TURN_EFFECT = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddEnchant(Enchants::GetEnchantFromText("DMF_730e"));
    cards.emplace("DMF_730e", CardDef(power));

    // ------------------------------------------ SPELL - DRUID
    // [DMF_730t] Moontouched Amulet - COST:3
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       Give your hero +4 Attack this turn. Gain 6 Armor.
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(
        std::make_shared<AddEnchantmentTask>("DMF_730e", EntityType::HERO));
    power.AddPowerTask(std::make_shared<ArmorTask>(6));
    cards.emplace("DMF_730t", CardDef(power));
}

void DarkmoonFaireCardsGen::AddHunter(std::map<std::string, CardDef>& cards)
{
    Power power;

    // ---------------------------------------- MINION - HUNTER
    // [DMF_083] Dancing Cobra - COST:2 [ATK:1/HP:5]
    // - Race: Beast, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Corrupt:</b> Gain <b>Poisonous</b>.
    // --------------------------------------------------------
    // GameTag:
    // - CORRUPT = 1
    // --------------------------------------------------------
    // RefTag:
    // - POISONOUS = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(nullptr);
    cards.emplace("DMF_083", CardDef(power, "DMF_083t"));

    // ----------------------------------------- SPELL - HUNTER
    // [DMF_084] Jewel of N'Zoth - COST:8
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: Summon three friendly <b>Deathrattle</b> minions
    //       that died this game.
    // --------------------------------------------------------
    // RefTag:
    // - DEATHRATTLE = 1
    // --------------------------------------------------------

    // ---------------------------------------- MINION - HUNTER
    // [DMF_085] Darkmoon Tonk - COST:7 [ATK:8/HP:5]
    // - Race: Mechanical, Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Deathrattle:</b> Fire four missiles
    //       at random enemies that deal 2 damage each.
    // --------------------------------------------------------
    // GameTag:
    // - DEATHRATTLE = 1
    // --------------------------------------------------------

    // ----------------------------------------- SPELL - HUNTER
    // [DMF_086] Petting Zoo - COST:3
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: Summon a 3/3 Strider.
    //       Repeat for each <b>Secret</b> you control.
    // --------------------------------------------------------
    // RefTag:
    // - SECRET = 1
    // --------------------------------------------------------

    // ---------------------------------------- MINION - HUNTER
    // [DMF_087] Trampling Rhino - COST:5 [ATK:5/HP:5]
    // - Race: Beast, Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Rush</b>. After this attacks and kills a minion,
    //       excess damage hits the enemy hero.
    // --------------------------------------------------------
    // GameTag:
    // - RUSH = 1
    // - TRIGGER_VISUAL = 1
    // --------------------------------------------------------

    // ---------------------------------------- WEAPON - HUNTER
    // [DMF_088] Rinling's Rifle - COST:4
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: After your hero attacks,
    //       <b>Discover</b> a <b>Secret</b> and cast it.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - TRIGGER_VISUAL = 1
    // --------------------------------------------------------
    // RefTag:
    // - DISCOVER = 1
    // - SECRET = 1
    // --------------------------------------------------------

    // ---------------------------------------- MINION - HUNTER
    // [DMF_089] Maxima Blastenheimer - COST:6 [ATK:4/HP:4]
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Summon a minion from your deck.
    //       It attacks the enemy hero, then dies.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // ----------------------------------------- SPELL - HUNTER
    // [DMF_090] Don't Feed the Animals - COST:2
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: Give all Beasts in your hand +1/+1.
    //       <b>Corrupt:</b> Give them +2/+2 instead.
    // --------------------------------------------------------
    // GameTag:
    // - CORRUPT = 1
    // --------------------------------------------------------

    // ---------------------------------------- MINION - HUNTER
    // [DMF_122] Mystery Winner - COST:1 [ATK:1/HP:1]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> <b>Discover</b> a <b>Secret.</b>
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // - DISCOVER = 1
    // --------------------------------------------------------
    // RefTag:
    // - SECRET = 1
    // --------------------------------------------------------

    // ----------------------------------------- SPELL - HUNTER
    // [DMF_123] Open the Cages - COST:2
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Secret:</b> When your turn starts,
    //       if you control two minions,
    //       summon an Animal Companion.
    // --------------------------------------------------------
    // GameTag:
    // - SECRET = 1
    // --------------------------------------------------------
}

void DarkmoonFaireCardsGen::AddHunterNonCollect(
    std::map<std::string, CardDef>& cards)
{
    Power power;

    // ---------------------------------------- MINION - HUNTER
    // [DMF_083t] Dancing Cobra - COST:2 [ATK:1/HP:5]
    // - Race: Beast, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       <b>Poisonous</b>
    // --------------------------------------------------------
    // GameTag:
    // - POISONOUS = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(nullptr);
    cards.emplace("DMF_083t", CardDef(power));

    // ---------------------------------------- MINION - HUNTER
    // [DMF_086e] Darkmoon Strider - COST:3 [ATK:3/HP:3]
    // - Race: Beast, Set: DARKMOON_FAIRE
    // --------------------------------------------------------

    // ----------------------------------- ENCHANTMENT - HUNTER
    // [DMF_090e] Well Fed - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +2/+2.
    // --------------------------------------------------------

    // ----------------------------------- ENCHANTMENT - HUNTER
    // [DMF_090e2] Well Fed - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +1/+1.
    // --------------------------------------------------------

    // ----------------------------------------- SPELL - HUNTER
    // [DMF_090t] Don't Feed the Animals - COST:2
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       Give all Beasts in your hand +2/+2.
    // --------------------------------------------------------

    // ----------------------------------- ENCHANTMENT - HUNTER
    // [DMF_734e] Greybud - COST:0
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Deathrattle:</b> Summon Greybough.
    // --------------------------------------------------------
}

void DarkmoonFaireCardsGen::AddMage(std::map<std::string, CardDef>& cards)
{
    Power power;

    // ------------------------------------------ MINION - MAGE
    // [DMF_100] Confection Cyclone - COST:2 [ATK:3/HP:2]
    // - Race: Elemental, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Add two 1/2 Sugar Elementals
    //       to your hand.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // ------------------------------------------ MINION - MAGE
    // [DMF_101] Firework Elemental - COST:5 [ATK:3/HP:5]
    // - Race: Elemental, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Deal 3 damage to a minion.
    //       <b>Corrupt:</b> Deal 12 instead.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // - CORRUPT = 1
    // --------------------------------------------------------
    // PlayReq:
    // - REQ_TARGET_IF_AVAILABLE = 0
    // - REQ_MINION_TARGET = 0
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(std::make_shared<DamageTask>(EntityType::TARGET, 3));
    cards.emplace("DMF_101",
                  CardDef(power,
                          PlayReqs{ { PlayReq::REQ_TARGET_IF_AVAILABLE, 0 },
                                    { PlayReq::REQ_MINION_TARGET, 0 } },
                          "DMF_101t"));

    // ------------------------------------------ MINION - MAGE
    // [DMF_102] Game Master - COST:2 [ATK:2/HP:3]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: The first <b>Secret</b> you play each turn costs (1).
    // --------------------------------------------------------
    // GameTag:
    // - AURA = 1
    // --------------------------------------------------------
    // RefTag:
    // - SECRET = 1
    // --------------------------------------------------------

    // ------------------------------------------- SPELL - MAGE
    // [DMF_103] Mask of C'Thun - COST:7
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: Deal 10 damage randomly split among all enemies.
    // --------------------------------------------------------
    // GameTag:
    // - ImmuneToSpellpower = 1
    // --------------------------------------------------------

    // ------------------------------------------- SPELL - MAGE
    // [DMF_104] Grand Finale - COST:8
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: Summon an 8/8 Elemental.
    //       Repeat for each Elemental you played last turn.
    // --------------------------------------------------------

    // ------------------------------------------- SPELL - MAGE
    // [DMF_105] Ring Toss - COST:4
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Discover</b> a <b>Secret</b> and cast it.
    //       <b>Corrupt:</b> <b>Discover</b> 2 instead.
    // --------------------------------------------------------
    // GameTag:
    // - CORRUPT = 1
    // --------------------------------------------------------
    // RefTag:
    // - DISCOVER = 1
    // - SECRET = 1
    // --------------------------------------------------------

    // ------------------------------------------ MINION - MAGE
    // [DMF_106] Occult Conjurer - COST:4 [ATK:4/HP:4]
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> If you control a <b>Secret</b>,
    //       summon a copy of this.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------
    // RefTag:
    // - SECRET = 1
    // --------------------------------------------------------

    // ------------------------------------------- SPELL - MAGE
    // [DMF_107] Rigged Faire Game - COST:3
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: <b>Secret:</b> If you didn't take any damage
    //       during your opponent's turn, draw 3 cards.
    // --------------------------------------------------------
    // GameTag:
    // - SECRET = 1
    // --------------------------------------------------------

    // ------------------------------------------- SPELL - MAGE
    // [DMF_108] Deck of Lunacy - COST:2
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: Transform spells in your deck into ones that cost (3) more.
    //       <i>(They keep their original Cost.)</i>
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // --------------------------------------------------------

    // ------------------------------------------ MINION - MAGE
    // [DMF_109] Sayge, Seer of Darkmoon - COST:6 [ATK:5/HP:5]
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Draw 1 card.
    //       <i>(Upgraded for each friendly <b>Secret</b> that
    //       has triggered this game!)</i>
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - BATTLECRY = 1
    // --------------------------------------------------------
    // RefTag:
    // - SECRET = 1
    // --------------------------------------------------------
}

void DarkmoonFaireCardsGen::AddMageNonCollect(
    std::map<std::string, CardDef>& cards)
{
    Power power;

    // ------------------------------------------ MINION - MAGE
    // [DMF_100t] Sugar Elemental - COST:1 [ATK:1/HP:2]
    // - Race: Elemental, Set: DARKMOON_FAIRE
    // --------------------------------------------------------

    // ------------------------------------------ MINION - MAGE
    // [DMF_101t] Firework Elemental - COST:5 [ATK:3/HP:5]
    // - Race: Elemental, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       <b>Battlecry:</b> Deal 12 damage to a minion.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(std::make_shared<DamageTask>(EntityType::TARGET, 12));
    cards.emplace(
        "DMF_101t",
        CardDef(power, PlayReqs{ { PlayReq::REQ_TARGET_IF_AVAILABLE, 0 },
                                 { PlayReq::REQ_MINION_TARGET, 0 } }));

    // ------------------------------------------ MINION - MAGE
    // [DMF_104t] Exploding Sparkler - COST:8 [ATK:8/HP:8]
    // - Race: Elemental, Set: DARKMOON_FAIRE
    // --------------------------------------------------------

    // ------------------------------------------- SPELL - MAGE
    // [DMF_105t] Ring Toss - COST:4
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       <b>Discover</b> 2 <b>Secrets</b> and cast them.
    // --------------------------------------------------------
    // RefTag:
    // - DISCOVER = 1
    // - SECRET = 1
    // --------------------------------------------------------
}

void DarkmoonFaireCardsGen::AddPaladin(std::map<std::string, CardDef>& cards)
{
    Power power;

    // --------------------------------------- MINION - PALADIN
    // [DMF_064] Carousel Gryphon - COST:5 [ATK:5/HP:5]
    // - Race: Mechanical, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Divine Shield</b>
    //       <b>Corrupt:</b> Gain +3/+3 and <b>Taunt</b>.
    // --------------------------------------------------------
    // GameTag:
    // - CORRUPT = 1
    // --------------------------------------------------------
    // RefTag:
    // - DIVINE_SHIELD = 1
    // - TAUNT = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(nullptr);
    cards.emplace("DMF_064", CardDef(power, "DMF_064t"));

    // --------------------------------------- MINION - PALADIN
    // [DMF_194] Redscale Dragontamer - COST:2 [ATK:2/HP:3]
    // - Race: Murloc, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Deathrattle:</b> Draw a Dragon.
    // --------------------------------------------------------
    // GameTag:
    // - DEATHRATTLE = 1
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - PALADIN
    // [DMF_195] Snack Run - COST:2
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Discover</b> a spell.
    //       Restore Health to your hero equal to its Cost.
    // --------------------------------------------------------
    // RefTag:
    // - DISCOVER = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - PALADIN
    // [DMF_235] Balloon Merchant - COST:4 [ATK:3/HP:5]
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Give your Silver Hand Recruits
    //       +1 Attack and <b>Divine Shield</b>.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------
    // RefTag:
    // - DIVINE_SHIELD = 1
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - PALADIN
    // [DMF_236] Oh My Yogg! - COST:1
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: <b>Secret:</b> When your opponent casts a spell,
    //       they instead cast a random one of the same Cost.
    // --------------------------------------------------------
    // GameTag:
    // - SECRET = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - PALADIN
    // [DMF_237] Carnival Barker - COST:3 [ATK:3/HP:2]
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: Whenever you summon a 1-Health minion, give it +1/+2.
    // --------------------------------------------------------
    // GameTag:
    // - TRIGGER_VISUAL = 1
    // --------------------------------------------------------

    // --------------------------------------- WEAPON - PALADIN
    // [DMF_238] Hammer of the Naaru - COST:6
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Summon a 6/6 Holy Elemental
    //       with <b>Taunt</b>.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------
    // RefTag:
    // - TAUNT = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - PALADIN
    // [DMF_240] Lothraxion the Redeemed - COST:5 [ATK:5/HP:5]
    // - Race: Demon, Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> For the rest of the game,
    //       after you summon a Silver Hand Recruit,
    //       give it <b>Divine Shield</b>.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - BATTLECRY = 1
    // --------------------------------------------------------
    // RefTag:
    // - DIVINE_SHIELD = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - PALADIN
    // [DMF_241] High Exarch Yrel - COST:8 [ATK:7/HP:5]
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> If your deck has no Neutral cards,
    //       gain <b>Rush</b>, <b>Lifesteal</b>, <b>Taunt</b>,
    //       and <b>Divine Shield</b>.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - BATTLECRY = 1
    // --------------------------------------------------------
    // RefTag:
    // - DIVINE_SHIELD = 1
    // - LIFESTEAL = 1
    // - RUSH = 1
    // - TAUNT = 1
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - PALADIN
    // [DMF_244] Day at the Faire - COST:3
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: Summon 3 Silver Hand Recruits.
    //       <b>Corrupt:</b> Summon 5.
    // --------------------------------------------------------
    // GameTag:
    // - CORRUPT = 1
    // --------------------------------------------------------
    // PlayReq:
    // - REQ_NUM_MINION_SLOTS = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(
        std::make_shared<SummonTask>("CS2_101t", 3, SummonSide::SPELL));
    cards.emplace(
        "DMF_244",
        CardDef(power, PlayReqs{ { PlayReq::REQ_NUM_MINION_SLOTS, 1 } },
                "DMF_244t"));
}

void DarkmoonFaireCardsGen::AddPaladinNonCollect(
    std::map<std::string, CardDef>& cards)
{
    Power power;

    // --------------------------------------- MINION - PALADIN
    // [DMF_064t] Carousel Gryphon - COST:5 [ATK:8/HP:8]
    // - Race: Mechanical, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       <b>Divine Shield,</b> <b>Taunt</b>
    // --------------------------------------------------------
    // GameTag:
    // - DIVINE_SHIELD = 1
    // - TAUNT = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(nullptr);
    cards.emplace("DMF_064t", CardDef(power));

    // ---------------------------------- ENCHANTMENT - PALADIN
    // [DMF_235e] Floaty - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +1 Attack.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - PALADIN
    // [DMF_236t] Oh My Yogg! - COST:0
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - PALADIN
    // [DMF_237e] At the Faire - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +1/+2.
    // --------------------------------------------------------

    // --------------------------------------- MINION - PALADIN
    // [DMF_238t] Holy Elemental - COST:6 [ATK:6/HP:6]
    // - Race: Elemental, Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: <b>Taunt</b>
    // --------------------------------------------------------
    // GameTag:
    // - TAUNT = 1
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - PALADIN
    // [DMF_244t] Day at the Faire - COST:3
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       Summon 5 Silver Hand Recruits.
    // --------------------------------------------------------
    // PlayReq:
    // - REQ_NUM_MINION_SLOTS = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(
        std::make_shared<SummonTask>("CS2_101t", 5, SummonSide::SPELL));
    cards.emplace(
        "DMF_244t",
        CardDef(power, PlayReqs{ { PlayReq::REQ_NUM_MINION_SLOTS, 1 } }));
}

void DarkmoonFaireCardsGen::AddPriest(std::map<std::string, CardDef>& cards)
{
    Power power;

    // ---------------------------------------- MINION - PRIEST
    // [DMF_053] Blood of G'huun - COST:9 [ATK:8/HP:8]
    // - Race: Elemental, Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: <b>Taunt</b> At the end of your turn,
    //       summon a 5/5 copy of a minion in your deck.
    // --------------------------------------------------------
    // GameTag:
    // - TAUNT = 1
    // - TRIGGER_VISUAL = 1
    // --------------------------------------------------------

    // ----------------------------------------- SPELL - PRIEST
    // [DMF_054] Insight - COST:2
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: Draw a minion. <b>Corrupt:</b> Reduce its Cost by (2).
    // --------------------------------------------------------
    // GameTag:
    // - CORRUPT = 1
    // --------------------------------------------------------

    // ----------------------------------------- SPELL - PRIEST
    // [DMF_055] Idol of Y'Shaarj - COST:8
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: Summon a 10/10 copy of a minion in your deck.
    // --------------------------------------------------------

    // ---------------------------------------- MINION - PRIEST
    // [DMF_056] G'huun the Blood God - COST:8 [ATK:8/HP:8]
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Draw 2 cards.
    //       They cost Health instead of Mana.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // ---------------------------------------- MINION - PRIEST
    // [DMF_116] The Nameless One - COST:4 [ATK:4/HP:4]
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Choose a minion.
    //       Become a 4/4 copy of it, then <b>Silence</b> it.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - BATTLECRY = 1
    // --------------------------------------------------------
    // RefTag:
    // - SILENCE = 1
    // --------------------------------------------------------

    // ---------------------------------------- MINION - PRIEST
    // [DMF_120] Nazmani Bloodweaver - COST:3 [ATK:2/HP:5]
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: After you cast a spell,
    //       reduce the cost of a random card in your hand by (1).
    // --------------------------------------------------------
    // GameTag:
    // - TRIGGER_VISUAL = 1
    // --------------------------------------------------------

    // ---------------------------------------- MINION - PRIEST
    // [DMF_121] Fortune Teller - COST:5 [ATK:3/HP:3]
    // - Race: Mechanical, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Taunt</b>
    //       <b>Battlecry:</b> Gain +1/+1 for each spell in your hand.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // - TAUNT = 1
    // --------------------------------------------------------

    // ---------------------------------------- MINION - PRIEST
    // [DMF_184] Fairground Fool - COST:3 [ATK:4/HP:3]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Taunt</b>
    //       <b>Corrupt:</b> Gain +4 Health.
    // --------------------------------------------------------
    // GameTag:
    // - CORRUPT = 1
    // - TAUNT = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(nullptr);
    cards.emplace("DMF_184", CardDef(power, "DMF_184t"));

    // ----------------------------------------- SPELL - PRIEST
    // [DMF_186] Auspicious Spirits - COST:4
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: Summon a random 4-Cost minion.
    //       <b>Corrupt:</b> Summon a 7-Cost minion instead.
    // --------------------------------------------------------
    // GameTag:
    // - CORRUPT = 1
    // --------------------------------------------------------

    // ----------------------------------------- SPELL - PRIEST
    // [DMF_187] Palm Reading - COST:3
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Discover</b> a spell.
    //       Reduce the Cost of spells in your hand by (1).
    // --------------------------------------------------------
    // GameTag:
    // - DISCOVER = 1
    // --------------------------------------------------------
}

void DarkmoonFaireCardsGen::AddPriestNonCollect(
    std::map<std::string, CardDef>& cards)
{
    Power power;

    // ----------------------------------------- SPELL - PRIEST
    // [DMF_054t] Insight - COST:2
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       Draw a minion. Reduce its Cost by (2).
    // --------------------------------------------------------

    // ----------------------------------- ENCHANTMENT - PRIEST
    // [DMF_121e2] Spelltacular! - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +1/+1.
    // --------------------------------------------------------

    // ---------------------------------------- MINION - PRIEST
    // [DMF_184t] Fairground Fool - COST:3 [ATK:4/HP:7]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       <b>Taunt</b>
    // --------------------------------------------------------
    // GameTag:
    // - TAUNT = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(nullptr);
    cards.emplace("DMF_184t", CardDef(power));

    // ----------------------------------------- SPELL - PRIEST
    // [DMF_186a] Auspicious Spirits - COST:4
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       Summon a random 7-Cost minion.
    // --------------------------------------------------------
}

void DarkmoonFaireCardsGen::AddRogue(std::map<std::string, CardDef>& cards)
{
    Power power;

    // ----------------------------------------- MINION - ROGUE
    // [DMF_071] Tenwu of the Red Smoke - COST:2 [ATK:3/HP:2]
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Return a friendly minion to your hand.
    //       It costs (1) this turn.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // ----------------------------------------- MINION - ROGUE
    // [DMF_511] Foxy Fraud - COST:2 [ATK:3/HP:2]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Your next <b>Combo</b> card
    //       this turn costs (2) less.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------
    // RefTag:
    // - COMBO = 1
    // --------------------------------------------------------

    // ------------------------------------------ SPELL - ROGUE
    // [DMF_512] Cloak of Shadows - COST:3
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: Give your hero <b>Stealth</b> for 1 turn.
    // --------------------------------------------------------
    // RefTag:
    // - STEALTH = 1
    // --------------------------------------------------------

    // ------------------------------------------ SPELL - ROGUE
    // [DMF_513] Shadow Clone - COST:2
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Secret:</b> After a minion attacks your hero,
    //       summon a copy of it with <b>Stealth</b>.
    // --------------------------------------------------------
    // GameTag:
    // - SECRET = 1
    // --------------------------------------------------------
    // RefTag:
    // - STEALTH = 1
    // --------------------------------------------------------

    // ----------------------------------------- MINION - ROGUE
    // [DMF_514] Ticket Master - COST:3 [ATK:4/HP:3]
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Deathrattle:</b> Shuffle 3 Tickets into your deck.
    //       When drawn, summon a 3/3 Plush Bear.
    // --------------------------------------------------------
    // GameTag:
    // - DEATHRATTLE = 1
    // --------------------------------------------------------

    // ------------------------------------------ SPELL - ROGUE
    // [DMF_515] Swindle - COST:2
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: Draw a spell.
    //       <b>Combo:</b> And a minion.
    // --------------------------------------------------------
    // GameTag:
    // - COMBO = 1
    // --------------------------------------------------------

    // ----------------------------------------- MINION - ROGUE
    // [DMF_516] Grand Empress Shek'zara - COST:6 [ATK:5/HP:7]
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> <b>Discover</b> a card in your deck
    //       and draw all copies of it.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - BATTLECRY = 1
    // --------------------------------------------------------
    // RefTag:
    // - DISCOVER = 1
    // --------------------------------------------------------

    // ----------------------------------------- MINION - ROGUE
    // [DMF_517] Sweet Tooth - COST:2 [ATK:3/HP:2]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Corrupt:</b> Gain +2 Attack and <b>Stealth</b>.
    // --------------------------------------------------------
    // GameTag:
    // - CORRUPT = 1
    // --------------------------------------------------------
    // RefTag:
    // - STEALTH = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(nullptr);
    cards.emplace("DMF_517", CardDef(power, "DMF_517a"));

    // ------------------------------------------ SPELL - ROGUE
    // [DMF_518] Malevolent Strike - COST:5
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: Destroy a minion. Costs (1) less for each card
    //       in your deck that didn't start there.
    // --------------------------------------------------------

    // ----------------------------------------- MINION - ROGUE
    // [DMF_519] Prize Plunderer - COST:1 [ATK:2/HP:1]
    // - Race: Pirate, Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Combo:</b> Deal 1 damage to a minion
    //       for each other card you've played this turn.
    // --------------------------------------------------------
    // GameTag:
    // - COMBO = 1
    // --------------------------------------------------------
}

void DarkmoonFaireCardsGen::AddRogueNonCollect(
    std::map<std::string, CardDef>& cards)
{
    Power power;

    // ------------------------------------ ENCHANTMENT - ROGUE
    // [DMF_511e] Enabling - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Your next <b>Combo</b> card costs (2) less.
    // --------------------------------------------------------
    // GameTag:
    // - AURA = 1
    // - TAG_ONE_TURN_EFFECT = 1
    // --------------------------------------------------------

    // ------------------------------------ ENCHANTMENT - ROGUE
    // [DMF_511e2] Cheaper Combos - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Costs (2) less.
    // --------------------------------------------------------

    // ------------------------------------ ENCHANTMENT - ROGUE
    // [DMF_512e] Sneaky - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: <b>Stealth</b> for 1 turn.
    // --------------------------------------------------------

    // ------------------------------------------ SPELL - ROGUE
    // [DMF_514t] Tickets - COST:3
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: <b>Casts When Drawn</b>
    //       Summon a 3/3 Plush Bear.
    // --------------------------------------------------------
    // GameTag:
    // - TOPDECK = 1
    // --------------------------------------------------------

    // ----------------------------------------- MINION - ROGUE
    // [DMF_514t2] Plush Bear - COST:3 [ATK:3/HP:3]
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------

    // ----------------------------------------- MINION - ROGUE
    // [DMF_517a] Sweet Tooth - COST:2 [ATK:5/HP:2]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       <b>Stealth</b>
    // --------------------------------------------------------
    // GameTag:
    // - STEALTH = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(nullptr);
    cards.emplace("DMF_517a", CardDef(power));
}

void DarkmoonFaireCardsGen::AddShaman(std::map<std::string, CardDef>& cards)
{
    Power power;

    // ----------------------------------------- SPELL - SHAMAN
    // [DMF_700] Revolve - COST:1
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: Transform all minions into random ones with the same Cost.
    // --------------------------------------------------------

    // ----------------------------------------- SPELL - SHAMAN
    // [DMF_701] Dunk Tank - COST:4
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: Deal 4 damage.
    //       <b>Corrupt:</b> Then deal 2 damage to all enemy minions.
    // --------------------------------------------------------
    // GameTag:
    // - CORRUPT = 1
    // --------------------------------------------------------
    // PlayReq:
    // - REQ_TARGET_TO_PLAY = 0
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(
        std::make_shared<DamageTask>(EntityType::TARGET, 4, true));
    cards.emplace("DMF_701",
                  CardDef(power, PlayReqs{ { PlayReq::REQ_TARGET_TO_PLAY, 0 } },
                          "DMF_701t"));

    // ----------------------------------------- SPELL - SHAMAN
    // [DMF_702] Stormstrike - COST:3
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: Deal 3 damage to a minion.
    //       Give your hero +3 Attack this turn.
    // --------------------------------------------------------

    // ---------------------------------------- MINION - SHAMAN
    // [DMF_703] Pit Master - COST:3 [ATK:1/HP:2]
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Summon a 3/2 Duelist.
    //       <b>Corrupt:</b> Summon two.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // - CORRUPT = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(
        std::make_shared<SummonTask>("DMF_703t2", SummonSide::RIGHT));
    cards.emplace("DMF_703", CardDef(power, "DMF_703t"));

    // ---------------------------------------- MINION - SHAMAN
    // [DMF_704] Cagematch Custodian - COST:2 [ATK:2/HP:2]
    // - Race: Elemental, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Draw a weapon.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // ---------------------------------------- WEAPON - SHAMAN
    // [DMF_705] Whack-A-Gnoll Hammer - COST:3
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: After your hero attacks,
    //       give a random friendly minion +1/+1.
    // --------------------------------------------------------
    // GameTag:
    // - TRIGGER_VISUAL = 1
    // --------------------------------------------------------

    // ----------------------------------------- SPELL - SHAMAN
    // [DMF_706] Deathmatch Pavilion - COST:2
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: Summon a 3/2 Duelist.
    //       If your hero attacked this turn, summon another.
    // --------------------------------------------------------

    // ---------------------------------------- MINION - SHAMAN
    // [DMF_707] Magicfin - COST:3 [ATK:3/HP:4]
    // - Race: Murloc, Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: After a friendly Murloc dies,
    //       add a random Legendary minion to your hand.
    // --------------------------------------------------------
    // GameTag:
    // - TRIGGER_VISUAL = 1
    // --------------------------------------------------------

    // ---------------------------------------- MINION - SHAMAN
    // [DMF_708] Inara Stormcrash - COST:5 [ATK:4/HP:5]
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: On your turn, your hero has +2 Attack and <b>Windfury</b>.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - AURA = 1
    // --------------------------------------------------------
    // RefTag:
    // - WINDFURY = 1
    // --------------------------------------------------------

    // ---------------------------------------- MINION - SHAMAN
    // [DMF_709] Grand Totem Eys'or - COST:3 [ATK:0/HP:4]
    // - Race: Totem, Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: At the end of your turn, give +1/+1 to all other Totems
    //       in your hand, deck and battlefield.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - TRIGGER_VISUAL = 1
    // --------------------------------------------------------
}

void DarkmoonFaireCardsGen::AddShamanNonCollect(
    std::map<std::string, CardDef>& cards)
{
    Power power;

    // ----------------------------------------- SPELL - SHAMAN
    // [DMF_701t] Dunk Tank - COST:4
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       Deal 4 damage, then deal 2 damage to all enemy minions.
    // --------------------------------------------------------
    // PlayReq:
    // - REQ_TARGET_TO_PLAY = 0
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(
        std::make_shared<DamageTask>(EntityType::TARGET, 4, true));
    power.AddPowerTask(
        std::make_shared<DamageTask>(EntityType::ENEMY_MINIONS, 2, true));
    cards.emplace(
        "DMF_701t",
        CardDef(power, PlayReqs{ { PlayReq::REQ_TARGET_TO_PLAY, 0 } }));

    // ----------------------------------- ENCHANTMENT - SHAMAN
    // [DMF_702e] Stormstrike - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +3 Attack this turn.
    // --------------------------------------------------------
    // GameTag:
    // - TAG_ONE_TURN_EFFECT = 1
    // --------------------------------------------------------

    // ---------------------------------------- MINION - SHAMAN
    // [DMF_703t] Pit Master - COST:3 [ATK:1/HP:2]
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       <b>Battlecry:</b> Summon two 3/2 Duelists.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(
        std::make_shared<SummonTask>("DMF_703t2", SummonSide::LEFT));
    power.AddPowerTask(
        std::make_shared<SummonTask>("DMF_703t2", SummonSide::RIGHT));
    cards.emplace("DMF_703t", CardDef(power));

    // ---------------------------------------- MINION - SHAMAN
    // [DMF_703t2] Duelist - COST:2 [ATK:3/HP:2]
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(nullptr);
    cards.emplace("DMF_703t2", CardDef(power));

    // ----------------------------------- ENCHANTMENT - SHAMAN
    // [DMF_705e] Winner! - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +1/+1.
    // --------------------------------------------------------

    // ---------------------------------------- MINION - SHAMAN
    // [DMF_706t] Pavilion Duelist - COST:2 [ATK:3/HP:2]
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------

    // ----------------------------------- ENCHANTMENT - SHAMAN
    // [DMF_708e] Storm Crashing - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +2 Attack and <b>Windfury</b>.
    // --------------------------------------------------------

    // ----------------------------------- ENCHANTMENT - SHAMAN
    // [DMF_709e] Strength of Eys'or - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +1/+1.
    // --------------------------------------------------------
}

void DarkmoonFaireCardsGen::AddWarlock(std::map<std::string, CardDef>& cards)
{
    Power power;

    // --------------------------------------- MINION - WARLOCK
    // [DMF_110] Fire Breather - COST:4 [ATK:4/HP:3]
    // - Race: Demon, Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Deal 2 damage to all minions except Demons.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - WARLOCK
    // [DMF_111] Man'ari Mosher - COST:3 [ATK:3/HP:4]
    // - Race: Demon, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Give a friendly Demon +3 Attack
    //       and <b>Lifesteal</b> this turn.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------
    // RefTag:
    // - LIFESTEAL = 1
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - WARLOCK
    // [DMF_113] Free Admission - COST:3
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: Draw 2 minions.
    //       If they're both Demons, reduce their Costs by (2).
    // --------------------------------------------------------

    // --------------------------------------- MINION - WARLOCK
    // [DMF_114] Midway Maniac - COST:2 [ATK:1/HP:5]
    // - Race: Demon, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Taunt</b>
    // --------------------------------------------------------
    // GameTag:
    // - TAUNT = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(nullptr);
    cards.emplace("DMF_114", CardDef(power));

    // --------------------------------------- MINION - WARLOCK
    // [DMF_115] Revenant Rascal - COST:3 [ATK:3/HP:3]
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Destroy a Mana Crystal for both players.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - WARLOCK
    // [DMF_117] Cascading Disaster - COST:4
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: Destroy a random enemy minion.
    //       <b>Corrupt:</b> Destroy 2.
    //       <b>Corrupt Again:</b> Destroy 3.
    // --------------------------------------------------------
    // GameTag:
    // - CORRUPT = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - WARLOCK
    // [DMF_118] Tickatus - COST:6 [ATK:8/HP:8]
    // - Race: Demon, Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Remove the top 5 cards from your deck.
    //       <b>Corrupt:</b> Your opponent's deck instead.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - BATTLECRY = 1
    // - CORRUPT = 1
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - WARLOCK
    // [DMF_119] Wicked Whispers - COST:1
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: Discard your lowest Cost card. Give your minions +1/+1.
    // --------------------------------------------------------

    // --------------------------------------- MINION - WARLOCK
    // [DMF_533] Ring Matron - COST:6 [ATK:6/HP:4]
    // - Race: Demon, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Taunt</b>
    //       <b>Deathrattle:</b> Summon two 3/2 Imps.
    // --------------------------------------------------------
    // GameTag:
    // - DEATHRATTLE = 1
    // - TAUNT = 1
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - WARLOCK
    // [DMF_534] Deck of Chaos - COST:6
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: Swap the Cost and Attack of all minions in your deck.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // --------------------------------------------------------
}

void DarkmoonFaireCardsGen::AddWarlockNonCollect(
    std::map<std::string, CardDef>& cards)
{
    // ---------------------------------- ENCHANTMENT - WARLOCK
    // [DMF_111e] Dark Power - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +3 Attack and <b>Lifesteal</b> until end of turn.
    // --------------------------------------------------------
    // GameTag:
    // - LIFESTEAL = 1
    // - TAG_ONE_TURN_EFFECT = 1
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - WARLOCK
    // [DMF_117t] Cascading Disaster - COST:4
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       Destroy 2 random enemy minions.
    //       <b>Corrupt:</b> Destroy 3.
    // --------------------------------------------------------
    // GameTag:
    // - CORRUPT = 1
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - WARLOCK
    // [DMF_117t2] Cascading Disaster - COST:4
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       Destroy 3 random enemy minions.
    // --------------------------------------------------------

    // --------------------------------------- MINION - WARLOCK
    // [DMF_118t] Tickatus - COST:6 [ATK:8/HP:8]
    // - Race: Demon, Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       <b>Battlecry:</b> Remove the top 5 cards
    //       from your opponent's deck.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - WARLOCK
    // [DMF_119e] Nightfall - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +1/+1.
    // --------------------------------------------------------

    // --------------------------------------- MINION - WARLOCK
    // [DMF_533t] Fiery Imp - COST:2 [ATK:3/HP:2]
    // - Race: Demon, Set: DARKMOON_FAIRE
    // --------------------------------------------------------
}

void DarkmoonFaireCardsGen::AddWarrior(std::map<std::string, CardDef>& cards)
{
    // --------------------------------------- MINION - WARRIOR
    // [DMF_521] Sword Eater - COST:4 [ATK:2/HP:5]
    // - Race: Pirate, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Taunt</b>
    //       <b>Battlecry:</b> Equip a 3/2 Sword.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // - TAUNT = 1
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - WARRIOR
    // [DMF_522] Minefield - COST:2
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: Deal 5 damage randomly split among all minions.
    // --------------------------------------------------------
    // GameTag:
    // - ImmuneToSpellpower = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - WARRIOR
    // [DMF_523] Bumper Car - COST:2 [ATK:1/HP:3]
    // - Race: Mechanical, Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Rush</b> <b>Deathrattle:</b> Add two 1/1 Riders
    //       with <b>Rush</b> to your hand.
    // --------------------------------------------------------
    // GameTag:
    // - DEATHRATTLE = 1
    // - RUSH = 1
    // --------------------------------------------------------

    // --------------------------------------- WEAPON - WARRIOR
    // [DMF_524] Ringmaster's Baton - COST:2
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: After your hero attacks, give a Mech, Dragon,
    //       and Pirate in your hand +1/+1.
    // --------------------------------------------------------
    // GameTag:
    // - TRIGGER_VISUAL = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - WARRIOR
    // [DMF_525] Ringmaster Whatley - COST:5 [ATK:3/HP:5]
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Draw a Mech, Dragon, and Pirate.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - WARRIOR
    // [DMF_526] Stage Dive - COST:1
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: Draw a <b>Rush</b> minion.
    //       <b>Corrupt:</b> Give it +2/+1.
    // --------------------------------------------------------
    // GameTag:
    // - CORRUPT = 1
    // --------------------------------------------------------
    // RefTag:
    // - RUSH = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - WARRIOR
    // [DMF_528] Tent Trasher - COST:5 [ATK:5/HP:5]
    // - Race: Dragon, Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: <b><b>Rush</b>.</b> Costs (1) less for each friendly minion with a
    // unique minion type.
    // --------------------------------------------------------
    // GameTag:
    // - RUSH = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - WARRIOR
    // [DMF_529] E.T.C., God of Metal - COST:2 [ATK:1/HP:4]
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: After a friendly <b>Rush</b> minion attacks,
    //       deal 2 damage to the enemy hero.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - TRIGGER_VISUAL = 1
    // --------------------------------------------------------
    // RefTag:
    // - RUSH = 1
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - WARRIOR
    // [DMF_530] Feat of Strength - COST:3
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: Give a random <b>Taunt</b> minion in your hand +5/+5.
    // --------------------------------------------------------
    // RefTag:
    // - TAUNT = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - WARRIOR
    // [DMF_531] Stage Hand - COST:2 [ATK:3/HP:2]
    // - Race: Mechanical, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Give a random minion in your hand +1/+1.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------
}

void DarkmoonFaireCardsGen::AddWarriorNonCollect(
    std::map<std::string, CardDef>& cards)
{
    // --------------------------------------- WEAPON - WARRIOR
    // [DMF_521t] Jawbreaker - COST:3
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - WARRIOR
    // [DMF_524e] Big-Top Special - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +1/+1.
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - WARRIOR
    // [DMF_526a] Stage Dive - COST:1
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       Draw a <b>Rush</b> minion and give it +2/+1.
    // --------------------------------------------------------
    // RefTag:
    // - RUSH = 1
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - WARRIOR
    // [DMF_526e] Bweeeoooow! - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +2/+1.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - WARRIOR
    // [DMF_530e] So Strong! - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +5/+5.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - WARRIOR
    // [DMF_531e] Ready to Perform - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +1/+1.
    // --------------------------------------------------------
}

void DarkmoonFaireCardsGen::AddDemonHunter(
    std::map<std::string, CardDef>& cards)
{
    Power power;

    // ----------------------------------- MINION - DEMONHUNTER
    // [DMF_217] Line Hopper - COST:3 [ATK:3/HP:4]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: Your <b>Outcast</b> cards cost (1) less.
    // --------------------------------------------------------
    // GameTag:
    // - AURA = 1
    // --------------------------------------------------------
    // RefTag:
    // - OUTCAST = 1
    // --------------------------------------------------------

    // ------------------------------------ SPELL - DEMONHUNTER
    // [DMF_219] Relentless Pursuit - COST:3
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: Give your hero +4 Attack and <b>Immune</b> this turn.
    // --------------------------------------------------------
    // RefTag:
    // - IMMUNE = 1
    // --------------------------------------------------------

    // ------------------------------------ SPELL - DEMONHUNTER
    // [DMF_221] Felscream Blast - COST:1
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Lifesteal</b>.
    //       Deal 1 damage to a minion and its neighbors.
    // --------------------------------------------------------
    // GameTag:
    // - LIFESTEAL = 1
    // --------------------------------------------------------

    // ----------------------------------- MINION - DEMONHUNTER
    // [DMF_222] Redeemed Pariah - COST:2 [ATK:2/HP:3]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: After you play an <b>Outcast</b> card, gain +1/+1.
    // --------------------------------------------------------
    // GameTag:
    // - TRIGGER_VISUAL = 1
    // --------------------------------------------------------
    // RefTag:
    // - OUTCAST = 1
    // --------------------------------------------------------

    // ----------------------------------- MINION - DEMONHUNTER
    // [DMF_223] Renowned Performer - COST:4 [ATK:3/HP:3]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Rush</b>
    //       <b>Deathrattle:</b> Summon two 1/1 Assistants
    //       with <b>Taunt</b>.  
    // --------------------------------------------------------
    // GameTag:
    // - DEATHRATTLE = 1
    // --------------------------------------------------------
    // RefTag:
    // - RUSH = 1
    // - TAUNT = 1
    // --------------------------------------------------------

    // ------------------------------------ SPELL - DEMONHUNTER
    // [DMF_224] Expendable Performers - COST:7
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: Summon seven 1/1 Illidari with <b>Rush</b>.
    //       If they all die this turn, summon seven more.
    // --------------------------------------------------------
    // RefTag:
    // - RUSH = 1
    // --------------------------------------------------------

    // ------------------------------------ SPELL - DEMONHUNTER
    // [DMF_225] Throw Glaive - COST:1
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: Deal 2 damage to a minion.
    //       If it dies, add a temporary copy of this to your hand.
    // --------------------------------------------------------

    // ----------------------------------- MINION - DEMONHUNTER
    // [DMF_226] Bladed Lady - COST:6 [ATK:6/HP:6]
    // - Race: Demon, Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Rush</b>
    //       Costs (1) if your hero has 6 or more Attack.
    // --------------------------------------------------------
    // GameTag:
    // - RUSH = 1
    // --------------------------------------------------------

    // ----------------------------------- WEAPON - DEMONHUNTER
    // [DMF_227] Dreadlord's Bite - COST:3
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Outcast:</b> Deal 1 damage to all enemies.
    // --------------------------------------------------------
    // GameTag:
    // - OUTCAST = 1
    // --------------------------------------------------------

    // ----------------------------------- MINION - DEMONHUNTER
    // [DMF_229] Stiltstepper - COST:3 [ATK:4/HP:1]
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Draw a card.
    //       If you play it this turn,
    //       give your hero +4 Attack this turn.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // ----------------------------------- MINION - DEMONHUNTER
    // [DMF_230] Il'gynoth - COST:4 [ATK:2/HP:6]
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: <b>Lifesteal</b>
    //       Your <b>Lifesteal</b> damages the enemy hero
    //       instead of healing you.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // RefTag:
    // - LIFESTEAL = 1
    // --------------------------------------------------------

    // ----------------------------------- MINION - DEMONHUNTER
    // [DMF_231] Zai, the Incredible - COST:5 [ATK:5/HP:3]
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Copy the left- and right-most cards
    //       in your hand.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // ----------------------------------- MINION - DEMONHUNTER
    // [DMF_247] Insatiable Felhound - COST:3 [ATK:2/HP:5]
    // - Race: Demon, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Taunt</b>
    //       <b>Corrupt:</b> Gain +1/+1 and <b>Lifesteal</b>.
    // --------------------------------------------------------
    // GameTag:
    // - CORRUPT = 1
    // --------------------------------------------------------
    // RefTag:
    // - LIFESTEAL = 1
    // - TAUNT = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(nullptr);
    cards.emplace("DMF_247", CardDef(power, "DMF_247t"));

    // ----------------------------------- MINION - DEMONHUNTER
    // [DMF_248] Felsteel Executioner - COST:3 [ATK:4/HP:3]
    // - Race: Elemental, Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: <b>Corrupt:</b> Become a weapon.
    // --------------------------------------------------------
    // GameTag:
    // - CORRUPT = 1
    // --------------------------------------------------------

    // ------------------------------------ SPELL - DEMONHUNTER
    // [DMF_249] Acrobatics - COST:3
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: Draw 2 cards. If you play both this turn, draw 2 more.
    // --------------------------------------------------------
}

void DarkmoonFaireCardsGen::AddDemonHunterNonCollect(
    std::map<std::string, CardDef>& cards)
{
    Power power;

    // ------------------------------ ENCHANTMENT - DEMONHUNTER
    // [DMF_217e] Marked for Passing - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Your <b>Outcast</b> cards cost (1) less.
    // --------------------------------------------------------

    // ------------------------------ ENCHANTMENT - DEMONHUNTER
    // [DMF_219e] Out for Blood - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +4 Attack and <b>Immune</b> this turn.
    // --------------------------------------------------------
    // GameTag:
    // - TAG_ONE_TURN_EFFECT = 1
    // --------------------------------------------------------

    // ------------------------------ ENCHANTMENT - DEMONHUNTER
    // [DMF_222e] Pariah's Resolve - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +1/+1.
    // --------------------------------------------------------

    // ----------------------------------- MINION - DEMONHUNTER
    // [DMF_223t] Performer's Assistant - COST:1 [ATK:1/HP:1]
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: <b>Taunt</b>
    // --------------------------------------------------------
    // GameTag:
    // - TAUNT = 1
    // --------------------------------------------------------

    // ----------------------------------- MINION - DEMONHUNTER
    // [DMF_247t] Insatiable Felhound - COST:3 [ATK:3/HP:6]
    // - Race: Demon, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       <b>Taunt</b><b>, Lifesteal</b>
    // --------------------------------------------------------
    // RefTag:
    // - LIFESTEAL = 1
    // - TAUNT = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(nullptr);
    cards.emplace("DMF_247t", CardDef(power));

    // ------------------------------ ENCHANTMENT - DEMONHUNTER
    // [DMF_248e] Wicked Transformation - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Health became Durability.
    // --------------------------------------------------------

    // ----------------------------------- WEAPON - DEMONHUNTER
    // [DMF_248t] Felsteel Executioner - COST:3
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    // --------------------------------------------------------
}

void DarkmoonFaireCardsGen::AddNeutral(std::map<std::string, CardDef>& cards)
{
    Power power;

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_002] N'Zoth, God of the Deep - COST:10 [ATK:5/HP:7]
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Resurrect a friendly minion
    //       of each minion type.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_004] Yogg-Saron, Master of Fate - COST:10 [ATK:7/HP:5]
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> If you've cast 10 spells this game,
    //       spin the Wheel of Yogg-Saron.
    //       <i>({0} left!)</i> <i>(Ready!)</i>
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_044] Rock Rager - COST:2 [ATK:5/HP:1]
    // - Race: Elemental, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Taunt</b>
    // --------------------------------------------------------
    // GameTag:
    // - TAUNT = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(nullptr);
    cards.emplace("DMF_044", CardDef(power));

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_062] Gyreworm - COST:3 [ATK:3/HP:2]
    // - Race: Elemental, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> If you played an Elemental last turn,
    //       deal 3 damage.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_065] Banana Vendor - COST:3 [ATK:2/HP:4]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Add 2 Bananas to each player's hand.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_066] Knife Vendor - COST:4 [ATK:3/HP:4]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Deal 4 damage to each hero.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_067] Prize Vendor - COST:2 [ATK:2/HP:3]
    // - Race: Murloc, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Both players draw a card.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_068] Optimistic Ogre - COST:5 [ATK:6/HP:7]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: 50% chance to attack the correct enemy.
    // --------------------------------------------------------
    // GameTag:
    // - FORGETFUL = 1
    // - TRIGGER_VISUAL = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_069] Claw Machine - COST:6 [ATK:6/HP:3]
    // - Race: Mechanical, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Rush</b>.
    //       <b>Deathrattle:</b> Draw a minion and give it +3/+3.
    // --------------------------------------------------------
    // GameTag:
    // - DEATHRATTLE = 1
    // - RUSH = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_070] Darkmoon Rabbit - COST:10 [ATK:1/HP:1]
    // - Race: Beast, Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: <b>Rush</b>, <b>Poisonous</b>
    //       Also damages the minions next to whomever this attacks.
    // --------------------------------------------------------
    // GameTag:
    // - POISONOUS = 1
    // - RUSH = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_073] Darkmoon Dirigible - COST:3 [ATK:3/HP:2]
    // - Race: Mechanical, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Divine Shield</b>
    //       <b>Corrupt:</b> Gain <b>Rush</b>.
    // --------------------------------------------------------
    // GameTag:
    // - CORRUPT = 1
    // - DIVINE_SHIELD = 1
    // --------------------------------------------------------
    // RefTag:
    // - RUSH = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(nullptr);
    cards.emplace("DMF_073", CardDef(power, "DMF_073t"));

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_074] Silas Darkmoon - COST:7 [ATK:4/HP:4]
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Choose a direction to rotate all minions.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_078] Strongman - COST:7 [ATK:6/HP:6]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Taunt</b>
    //       <b>Corrupt:</b> This costs (0).
    // --------------------------------------------------------
    // GameTag:
    // - CORRUPT = 1
    // - TAUNT = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(nullptr);
    cards.emplace("DMF_078", CardDef(power, "DMF_078t"));

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_079] Inconspicuous Rider - COST:3 [ATK:2/HP:2]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Cast a <b>Secret</b> from your deck.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------
    // RefTag:
    // - SECRET = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_080] Fleethoof Pearltusk - COST:5 [ATK:4/HP:4]
    // - Race: Beast, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Rush</b>
    //       <b>Corrupt:</b> Gain +4/+4.
    // --------------------------------------------------------
    // GameTag:
    // - CORRUPT = 1
    // - RUSH = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(nullptr);
    cards.emplace("DMF_080", CardDef(power, "DMF_080t"));

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_081] K'thir Ritualist - COST:3 [ATK:4/HP:4]
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Taunt</b>
    //       <b>Battlecry:</b> Add a random 4-Cost minion
    //       to your opponent's hand.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // - TAUNT = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_082] Darkmoon Statue - COST:3 [ATK:0/HP:5]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: Your other minions have +1 Attack.
    //       <b>Corrupt:</b> This gains +4 Attack.
    // --------------------------------------------------------
    // GameTag:
    // - AURA = 1
    // - CORRUPT = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_091] Wriggling Horror - COST:2 [ATK:2/HP:1]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Give adjacent minions +1/+1.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_124] Horrendous Growth - COST:2 [ATK:2/HP:2]
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: <b>Corrupt:</b> Gain +1/+1.
    //       Can be <b>Corrupted</b> endlessly.
    // --------------------------------------------------------
    // GameTag:
    // - CORRUPT = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_125] Safety Inspector - COST:1 [ATK:1/HP:3]
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Shuffle the lowest-Cost card
    //        from your hand into your deck. Draw a card.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_163] Carnival Clown - COST:9 [ATK:4/HP:4]
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: <b>Taunt</b>
    //       <b>Battlecry:</b> Summon 2 copies of this.
    //       <b>Corrupt:</b> Fill your board with copies.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // - CORRUPT = 1
    // - TAUNT = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_174] Circus Medic - COST:4 [ATK:3/HP:4]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Restore 4 Health.
    //       <b>Corrupt:</b> Deal 4 damage instead.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // - CORRUPT = 1
    // --------------------------------------------------------
    // PlayReq:
    // - REQ_TARGET_IF_AVAILABLE = 0
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(std::make_shared<HealTask>(EntityType::TARGET, 4));
    cards.emplace(
        "DMF_174",
        CardDef(power, PlayReqs{ { PlayReq::REQ_TARGET_IF_AVAILABLE, 0 } },
                "DMF_174t"));

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_188] Y'Shaarj, the Defiler - COST:10 [ATK:10/HP:10]
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Add a copy of each <b>Corrupted</b>
    //       card you've played this game to your hand.
    //       They cost (0) this turn.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_189] Costumed Entertainer - COST:2 [ATK:1/HP:2]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Give a random minion in your hand +2/+2.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_190] Fantastic Firebird - COST:4 [ATK:3/HP:5]
    // - Race: Elemental, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Windfury</b>
    // --------------------------------------------------------
    // GameTag:
    // - WINDFURY = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(nullptr);
    cards.emplace("DMF_190", CardDef(power));

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_191] Showstopper - COST:2 [ATK:3/HP:2]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Deathrattle:</b> <b>Silence</b> all minions.
    // --------------------------------------------------------
    // GameTag:
    // - DEATHRATTLE = 1
    // --------------------------------------------------------
    // RefTag:
    // - SILENCE = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_202] Derailed Coaster - COST:5 [ATK:3/HP:2]
    // - Set: DARKMOON_FAIRE, Rarity: Rare
    // --------------------------------------------------------
    // Text: <b>Battlecry:</b> Summon a 1/1 Rider with <b>Rush</b>
    //       for each minion in your hand.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------
    // RefTag:
    // - RUSH = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_254] C'Thun, the Shattered - COST:10 [ATK:6/HP:6]
    // - Set: DARKMOON_FAIRE, Rarity: Legendary
    // --------------------------------------------------------
    // Text: <b>Start of Game:</b> Break into pieces.
    //       <b>Battlecry:</b> Deal 30 damage randomly split
    //       among all enemies.
    // --------------------------------------------------------
    // GameTag:
    // - ELITE = 1
    // - BATTLECRY = 1
    // --------------------------------------------------------
    // RefTag:
    // - START_OF_GAME = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_520] Parade Leader - COST:2 [ATK:2/HP:3]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: After you summon a <b>Rush</b> minion, give it +2 Attack.
    // --------------------------------------------------------
    // GameTag:
    // - TRIGGER_VISUAL = 1
    // --------------------------------------------------------
    // RefTag:
    // - RUSH = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_532] Circus Amalgam - COST:4 [ATK:4/HP:5]
    // - Race: All, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Taunt</b>
    //       <i>This has all minion types.</i>
    // --------------------------------------------------------
    // GameTag:
    // - TAUNT = 1
    // --------------------------------------------------------
}

void DarkmoonFaireCardsGen::AddNeutralNonCollect(
    std::map<std::string, CardDef>& cards)
{
    Power power;

    // ---------------------------------------- SPELL - NEUTRAL
    // [DMF_004t1] Mysterybox - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Cast a random spell for every spell you've cast this game
    //       <i>(targets chosen randomly)</i>.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_004t1e] Prizes! - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Costs (0) this turn.
    // --------------------------------------------------------
    // GameTag:
    // - TAG_ONE_TURN_EFFECT = 1
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - NEUTRAL
    // [DMF_004t2] Hand of Fate - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Fill your hand with random spells.
    //       They cost (0) this turn.
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - NEUTRAL
    // [DMF_004t3] Curse of Flesh - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Fill the board with random minions,
    //       then give yours <b>Rush</b>.
    // --------------------------------------------------------
    // RefTag:
    // - RUSH = 1
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - NEUTRAL
    // [DMF_004t4] Mindflayer Goggles - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Take control of three random enemy minions.
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - NEUTRAL
    // [DMF_004t5] Devouring Hunger - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Destroy all other minions. Gain their Attack and Health.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_004t5e] Consume - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Increased stats.
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - NEUTRAL
    // [DMF_004t6] Rod of Roasting - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Cast 'Pyroblast' randomly until a player dies.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_053e] Blood of G'huun - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Attack and Health set to 5.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_054e] Insightful - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Costs (2) less.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_055e] Idolized - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Attack and Health set to 10.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_056e] Blood of Gods - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Costs Health instead of Mana.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_065e] Bananas - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Has +1/+1.
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - NEUTRAL
    // [DMF_065t] Bananas - COST:1
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Give a minion +1/+1.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_069e] AHHHHH! - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +3/+3.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_071e] Fired Up - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Costs (1) this turn.
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_073t] Darkmoon Dirigible - COST:3 [ATK:3/HP:2]
    // - Race: Mechanical, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       <b>Rush</b>, <b>Divine Shield</b>
    // --------------------------------------------------------
    // GameTag:
    // - DIVINE_SHIELD = 1
    // - RUSH = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(nullptr);
    cards.emplace("DMF_073t", CardDef(power));

    // ---------------------------------------- SPELL - NEUTRAL
    // [DMF_074a] This Way - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Minions will rotate
    //       this way.
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - NEUTRAL
    // [DMF_074b] That Way - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Minions will rotate
    //       that way.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_078e] Corruption - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Costs (0).
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_078t] Strongman - COST:0 [ATK:6/HP:6]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       <b>Taunt</b>
    // --------------------------------------------------------
    // GameTag:
    // - TAUNT = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(nullptr);
    cards.emplace("DMF_078t", CardDef(power));

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_080t] Fleethoof Pearltusk - COST:5 [ATK:8/HP:8]
    // - Race: Beast, Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       <b>Rush</b>
    // --------------------------------------------------------
    // GameTag:
    // - RUSH = 1
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(nullptr);
    cards.emplace("DMF_080t", CardDef(power));

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_082e] Imposing Statue - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +1 Attack from Darkmoon Statue.
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_082t] Darkmoon Statue - COST:3 [ATK:4/HP:5]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       Your other minions have +1 Attack.
    // --------------------------------------------------------
    // GameTag:
    // - AURA = 1
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_091e2] Wriggling Around - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +1/+1.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_102e] Special Discount - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Costs (1).
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_108e] Sanity Renounced - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Cost adjusted.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_113e] Skipped Line - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Costs (2) less.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_116e] Nameless - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: 4/4.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_120e2] Bloodweaving - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Costs (1) less.
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_124t] Horrendous Growth - COST:2 [ATK:3/HP:3]
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       <b>Corrupt:</b> Gain +1/+1.
    //       Can be <b>Corrupted</b> endlessly.
    // --------------------------------------------------------
    // GameTag:
    // - CORRUPT = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_163t] Carnival Clown - COST:9 [ATK:4/HP:4]
    // - Set: DARKMOON_FAIRE, Rarity: Epic
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       <b>Taunt</b>
    //       <b>Battlecry:</b> Fill your board with copies of this.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // - TAUNT = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_174t] Circus Medic - COST:4 [ATK:3/HP:4]
    // - Set: DARKMOON_FAIRE, Rarity: Common
    // --------------------------------------------------------
    // Text: <b>Corrupted</b>
    //       <b>Battlecry:</b> Deal 4 damage.
    // --------------------------------------------------------
    // GameTag:
    // - BATTLECRY = 1
    // --------------------------------------------------------
    // PlayReq:
    // - REQ_TARGET_IF_AVAILABLE = 0
    // --------------------------------------------------------
    power.ClearData();
    power.AddPowerTask(std::make_shared<DamageTask>(EntityType::TARGET, 4));
    cards.emplace(
        "DMF_174t",
        CardDef(power, PlayReqs{ { PlayReq::REQ_TARGET_IF_AVAILABLE, 0 } }));

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_187e] Palm Reading - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Costs (1) less.
    // --------------------------------------------------------
    // GameTag:
    // - ENCHANTMENT_INVISIBLE = 1
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_188e] True Corruption - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Your next <b>Corrupt</b> card costs (0).
    // --------------------------------------------------------
    // GameTag:
    // - AURA = 1
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_188e2] Corruption of Y'Shaarj - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Costs (0) this turn.
    // --------------------------------------------------------
    // GameTag:
    // - TAG_ONE_TURN_EFFECT = 1
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - NEUTRAL
    // [DMF_188t] Corruption - COST:1
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: <b>Corrupt</b> all your cards.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_189e] Definitely Entertained - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +2/+2.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_224e] Expendable - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: When no more Illidari are present, summon seven more.
    // --------------------------------------------------------
    // GameTag:
    // - TAG_ONE_TURN_EFFECT = 1
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_229e] Stilts - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +4 Attack this turn.
    // --------------------------------------------------------
    // GameTag:
    // - TAG_ONE_TURN_EFFECT = 1
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_229e2] Stepping - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Play the card to give your Hero +4 Attack this turn..
    // --------------------------------------------------------
    // GameTag:
    // - TAG_ONE_TURN_EFFECT = 1
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_230e] Corruption - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Your <b>Lifesteal</b> damages the opposing hero
    //       instead of healing you.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_240e] Lothraxion's Power - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Gives your Silver Hand Recruits <b>Divine Shield</b>.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_247e] Corruption - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Corrupted.
    // --------------------------------------------------------
    // GameTag:
    // - ENCHANTMENT_INVISIBLE = 1
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_249e] Acrobatics - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Play the 2 cards to draw 2 more.
    // --------------------------------------------------------
    // GameTag:
    // - TAG_ONE_TURN_EFFECT = 1
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - NEUTRAL
    // [DMF_254t3] Eye of C'Thun - COST:5
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: <b>Piece of C'Thun ({0}/4)</b>
    //       Deal 7 damage randomly split among all enemies.
    // --------------------------------------------------------
    // GameTag:
    // - ImmuneToSpellpower = 1
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - NEUTRAL
    // [DMF_254t4] Heart of C'Thun - COST:5
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: <b>Piece of C'Thun ({0}/4)</b>
    //       Deal 3 damage to all minions.
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - NEUTRAL
    // [DMF_254t5] Body of C'Thun - COST:5
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: <b>Piece of C'Thun ({0}/4)</b>
    //       Summon a 6/6 C'Thun's Body with <b>Taunt</b>.
    // --------------------------------------------------------
    // RefTag:
    // - TAUNT = 1
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_254t5t] C'Thun's Body - COST:6 [ATK:6/HP:6]
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: <b>Taunt</b>
    // --------------------------------------------------------
    // GameTag:
    // - TAUNT = 1
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - NEUTRAL
    // [DMF_254t7] Maw of C'Thun - COST:5
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: <b>Piece of C'Thun ({0}/4)</b>
    //       Destroy a minion.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_520e] Leading Strong - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: +2 Attack.
    // --------------------------------------------------------

    // --------------------------------------- MINION - NEUTRAL
    // [DMF_523t] Darkmoon Rider - COST:1 [ATK:1/HP:1]
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: <b>Rush</b>
    // --------------------------------------------------------
    // GameTag:
    // - RUSH = 1
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_534e] Deck of Chaos - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Adjusted Attack.
    // --------------------------------------------------------

    // ---------------------------------- ENCHANTMENT - NEUTRAL
    // [DMF_534e2] Cost of Chaos - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Adjusted Cost.
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - NEUTRAL
    // [DMF_COIN1] The Coin - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Gain 1 Mana Crystal this turn only.
    // --------------------------------------------------------

    // ---------------------------------------- SPELL - NEUTRAL
    // [DMF_COIN2] The Coin - COST:0
    // - Set: DARKMOON_FAIRE
    // --------------------------------------------------------
    // Text: Gain 1 Mana Crystal this turn only.
    // --------------------------------------------------------
}

void DarkmoonFaireCardsGen::AddAll(std::map<std::string, CardDef>& cards)
{
    AddHeroes(cards);
    AddHeroPowers(cards);

    AddDruid(cards);
    AddDruidNonCollect(cards);

    AddHunter(cards);
    AddHunterNonCollect(cards);

    AddMage(cards);
    AddMageNonCollect(cards);

    AddPaladin(cards);
    AddPaladinNonCollect(cards);

    AddPriest(cards);
    AddPriestNonCollect(cards);

    AddRogue(cards);
    AddRogueNonCollect(cards);

    AddShaman(cards);
    AddShamanNonCollect(cards);

    AddWarlock(cards);
    AddWarlockNonCollect(cards);

    AddWarrior(cards);
    AddWarriorNonCollect(cards);

    AddDemonHunter(cards);
    AddDemonHunterNonCollect(cards);

    AddNeutral(cards);
    AddNeutralNonCollect(cards);
}
}  // namespace RosettaStone::PlayMode
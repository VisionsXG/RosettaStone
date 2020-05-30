// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef ROSETTASTONE_BATTLEGROUNDS_SPELL_HPP
#define ROSETTASTONE_BATTLEGROUNDS_SPELL_HPP

#include <Rosetta/Battlegrounds/Cards/Card.hpp>

namespace RosettaStone::Battlegrounds
{
//!
//! \brief Spell class.
//!
//! Spell cards are cards that can be played to trigger a one time effect or
//! ability, described in the card's text. Casting a spell consumes the card,
//! producing an immediate effect, although spells with the Secret or Quest
//! ability are delayed until activated by specific events. Spell cards do not
//! have Attack or Health attributes, only a mana cost, shown in the top left
//! corner.
//!
class Spell
{
 public:
    //! Default constructor.
    Spell() = default;

    //! Constructs Minion instance with given \p card.
    //! \param card A card that contains the spell data.
    Spell(Card card);

 private:
    Card m_card;
};
}  // namespace RosettaStone::Battlegrounds

#endif  // ROSETTASTONE_BATTLEGROUNDS_SPELL_HPP

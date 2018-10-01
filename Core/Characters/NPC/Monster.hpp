//
// Created by gordo on 29.09.18.
//

#ifndef GAMERPG_MONSTER_HPP
#define GAMERPG_MONSTER_HPP

#include "../Character.hpp"

namespace Core {
    class Monster : public Character {
    public:
        explicit Monster(unsigned int id, unsigned int hitPoints) : Character(id, hitPoints) {
            this->name = "Monster: " +  std::to_string(id);
        };
    };
};


#endif //GAMERPG_MONSTER_HPP

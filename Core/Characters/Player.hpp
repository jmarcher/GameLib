//
// Created by gordo on 29.09.18.
//

#ifndef GAMERPG_PLAYER_HPP
#define GAMERPG_PLAYER_HPP

#include "Utiles/Inventory.hpp"
#include "Character.hpp"

namespace Core {
    class Player : public Character {
    public:
        explicit Player() : Character(1, {100}) {
            this->dextery = 1;
            this->charm = 1;
            this->agility = 1;
        };

    protected:
        unsigned int dextery;
        unsigned int charm;
        unsigned int agility;
    };
};


#endif //GAMERPG_PLAYER_HPP

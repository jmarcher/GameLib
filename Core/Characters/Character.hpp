//
// Created by gordo on 29.09.18.
//

#ifndef GAMERPG_CHARACTER_HPP
#define GAMERPG_CHARACTER_HPP

#include <string>
#include "../Objects/Object.hpp"
#include "Utiles/Inventory.hpp"

namespace Core {
    struct Stats {
        unsigned int hitPoints;
        unsigned int manaPoints;
        unsigned int attack;
        unsigned int defense;
    };

    class Character : public Object {
    public:
        explicit Character(unsigned int id, unsigned int hitPoints) : Object(id) {
            basicStats.hitPoints = hitPoints;
            this->solid = true;
            this->inventory = new Inventory();
        };

        void addItemToInventory(Item &item);

        Inventory *getInventory() const;

        unsigned int getHP() const {
            return basicStats.hitPoints;
        };

        Stats getBasicStats() const {
            return this->basicStats;
        };
    protected:
        unsigned int hitPoints;
        Stats basicStats;
        Inventory *inventory;
    };
};


#endif //GAMERPG_CHARACTER_HPP

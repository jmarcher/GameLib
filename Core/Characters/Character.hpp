//
// Created by gordo on 29.09.18.
//

#ifndef GAMERPG_CHARACTER_HPP
#define GAMERPG_CHARACTER_HPP

#include <string>
#include "../Objects/Object.hpp"
#include "Utiles/Inventory.hpp"
#include "Relations/Relation.hpp"

namespace Core {
    struct Stats {
        unsigned int hitPoints;
        unsigned int manaPoints;
        unsigned int attack;
        unsigned int defense;
    };

    class Character : public Object {
    public:
        explicit Character(unsigned int id, Stats basicStats);

        void addItemToInventory(Item &item);

        Inventory *getInventory() const;

        bool isAlive() const;

        bool isDead() const;

        unsigned int getHP() const {
            return basicStats.hitPoints;
        };

        void setHP(unsigned int hitPoints) {
            this->basicStats.hitPoints = hitPoints;
        };

        Stats getBasicStats() const {
            return this->basicStats;
        };

        void addRelationship(Relation &relation);

        const Relation& makeRelationship(Character & with, RelationType type, signed short int grade);

    protected:
        Stats basicStats;
        Inventory *inventory;
        std::vector<Relation *> relationships;
    };
};


#endif //GAMERPG_CHARACTER_HPP

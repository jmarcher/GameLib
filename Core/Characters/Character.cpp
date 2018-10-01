//
// Created by gordo on 29.09.18.
//

#include "Character.hpp"

Core::Character::Character(unsigned int id, Core::Stats basicStats) : Object(id) {
    this->basicStats = basicStats;
    this->solid = true;
    this->inventory = new Inventory();
};

void Core::Character::addItemToInventory(Core::Item &item) {
    this->inventory->add(item);
};

Core::Inventory *Core::Character::getInventory() const {
    return this->inventory;
};


bool Core::Character::isAlive() const {
    return !this->isDead();
};


bool Core::Character::isDead() const {
    return this->basicStats.hitPoints == 0;
};

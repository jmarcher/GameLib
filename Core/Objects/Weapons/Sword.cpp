//
// Created by gordo on 29.09.18.
//

#include "Sword.hpp"

Core::Sword::Sword(unsigned int id) : Item(id) {
    this->solid = true;
    this->name = "Sword";
};

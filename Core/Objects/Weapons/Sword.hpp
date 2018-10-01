//
// Created by gordo on 29.09.18.
//

#ifndef GAMERPG_SWORD_HPP
#define GAMERPG_SWORD_HPP

#include "../Item.hpp"

namespace Core {
    class Sword : public Item {
    public:
        explicit Sword(unsigned int id) : Item(id) {
            this->solid = true;
            this->name = "Sword";
        };
    };
};


#endif //GAMERPG_SWORD_HPP

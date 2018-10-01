//
// Created by gordo on 30.09.18.
//

#ifndef GAMERPG_ITEM_HPP
#define GAMERPG_ITEM_HPP

#include "Object.hpp"

namespace Core {
    /**
     * Explicitly defines an item to avoid Objects to be inserted into inventories.
     */
    class Item : public Object {
    public:
        explicit Item(unsigned int id) : Object(id) {
            this->destructible = true;
            this->sellable = true;
        };

        bool isDestructible() const {
            return destructible;
        }

        void setDestructible(bool destructible) {
            this->destructible = destructible;
        }

        bool isSellable() const {
            return sellable;
        }

        void setSellable(bool sellable) {
            this->sellable = sellable;
        }

    protected:
        bool destructible;
        bool sellable;
    };
}


#endif //GAMERPG_ITEM_HPP

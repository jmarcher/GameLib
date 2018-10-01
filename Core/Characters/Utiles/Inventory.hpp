//
// Created by gordo on 29.09.18.
//

#ifndef GAMERPG_INVENTORY_HPP
#define GAMERPG_INVENTORY_HPP

#include <vector>
#include "../../Objects/Item.hpp"

#define MAX_AMOUNT_ITEMS 50
namespace Core {

    class Inventory : public Item {
    public:
        Inventory() : Item(0) {
            this->maxAmountItems = MAX_AMOUNT_ITEMS;
        };

        void add(Item &item) {
            this->items.push_back(&item);
        };

        const std::vector<Item *> &getItems() const {
            return items;
        }

        unsigned short int amountItems() const {
            return static_cast<unsigned short>(this->items.size());
        };
    protected:
        std::vector<Item *> items;
        unsigned short int maxAmountItems;
    };
};


#endif //GAMERPG_INVENTORY_HPP

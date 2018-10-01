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
        Inventory();

        void add(Item &item);

        const std::vector<Item *> &getItems() const;

        unsigned short int amountItems() const;

    protected:
        std::vector<Item *> items;
        unsigned short int maxAmountItems;
    };
};


#endif //GAMERPG_INVENTORY_HPP

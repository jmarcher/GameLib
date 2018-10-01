//
// Created by gordo on 29.09.18.
//

#include "Inventory.hpp"

unsigned short int Core::Inventory::amountItems() const {
    return static_cast<unsigned short>(this->items.size());
};

const std::vector<Core::Item *> &Core::Inventory::getItems() const {
    return items;
};

void Core::Inventory::add(Core::Item &item) {
    this->items.push_back(&item);
};

Core::Inventory::Inventory() : Item(0) {
    this->maxAmountItems = MAX_AMOUNT_ITEMS;
};
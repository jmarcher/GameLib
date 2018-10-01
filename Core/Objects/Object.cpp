//
// Created by gordo on 29.09.18.
//

#include "Object.hpp"

Core::Object::Object() {
    this->id = 0;
    this->name = "Object: " + std::to_string(this->id);
    this->solid = false;
};

Core::Object::Object(unsigned int id) {
    this->id = id;
    this->name = "Object: " + std::to_string(this->id);
    this->solid = false;
};

bool Core::Object::equals(Core::Object &o) const {
    return o.id == this->id;
};

unsigned int Core::Object::getId() const {
    return id;
};

bool Core::Object::isSolid() const {
    return this->solid;
};

const std::string &Core::Object::getName() const {
    return name;
};

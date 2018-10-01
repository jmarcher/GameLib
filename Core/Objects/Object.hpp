//
// Created by gordo on 29.09.18.
//

#ifndef GAMERPG_OBJECT_HPP
#define GAMERPG_OBJECT_HPP


#include <string>

namespace Core {
    class Object {
    public:
        Object() {
            this->id = 0;
            this->name = "Object: " + std::to_string(this->id);
            this->solid = false;
        };

        explicit Object(unsigned int id) {
            this->id = id;
            this->name = "Object: " + std::to_string(this->id);
            this->solid = false;
        };

        bool equals(Object &o) const {
            return o.id == this->id;
        };

        unsigned int getId() const {
            return id;
        }

        bool isSolid() const {
            return this->solid;
        }

        const std::string &getName() const {
            return name;
        };

        const std::string toString() const {
            return "Name: " + this->getName() + "\n" +
                   "Solid: " + (this->isSolid() ? "True" : "False");
        };

    protected:
        unsigned int id;
        bool solid;
        std::string name;
    };
};


#endif //GAMERPG_OBJECT_HPP

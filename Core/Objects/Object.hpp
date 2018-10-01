//
// Created by gordo on 29.09.18.
//

#ifndef GAMERPG_OBJECT_HPP
#define GAMERPG_OBJECT_HPP


#include <string>

namespace Core {
    class Object {
    public:
        Object();

        explicit Object(unsigned int id);

        bool equals(Object &o) const;

        unsigned int getId() const;

        bool isSolid() const;

        const std::string &getName() const;

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

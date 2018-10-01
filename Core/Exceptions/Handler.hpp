//
// Created by gordo on 01.10.18.
//

#ifndef GAMERPG_HANDLER_HPP
#define GAMERPG_HANDLER_HPP

#include <list>
#include "Exception.hpp"

namespace Core {
    class ExceptionHandler {
    protected:
        static ExceptionHandler *instance;

        std::list<Exception *> exceptions;

        ExceptionHandler();

    public:

        static ExceptionHandler *getInstance();

        void addException(Exception &e) {
            this->exceptions.push_back(&e);
        };
    };
};


#endif //GAMERPG_HANDLER_HPP

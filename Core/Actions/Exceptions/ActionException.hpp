//
// Created by gordo on 01.10.18.
//

#ifndef GAMERPG_ACTIONEXCEPTION_HPP
#define GAMERPG_ACTIONEXCEPTION_HPP

#include "../../Exceptions/Exception.hpp"
#include "../Action.hpp"

namespace Core {
    class ActionException : public Exception {
    public:
        ActionException() : Exception("ActionException occurred") {
            this->actionThatCausedException = nullptr;
        };

        explicit ActionException(Action &action) : Exception("ActionException occurred", 1000) {
            this->actionThatCausedException = &action;
        };
    protected:
        Action *actionThatCausedException;
    };
};


#endif //GAMERPG_ACTIONEXCEPTION_HPP

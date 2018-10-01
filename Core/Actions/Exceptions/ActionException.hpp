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
            action = nullptr;
        };

        ActionException(Action &action) {
            this->action = &action;
        };
    protected:
        Action *action;
    };
};


#endif //GAMERPG_ACTIONEXCEPTION_HPP

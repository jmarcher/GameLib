//
// Created by gordo on 01.10.18.
//

#ifndef GAMERPG_ACTIONEXCEPTION_HPP
#define GAMERPG_ACTIONEXCEPTION_HPP

#include "../../Exceptions/Exception.hpp"

namespace Core {
    class ActionException : public Exception {
    public:
        ActionException() : Exception("ActionException occurred") {}
    };
};


#endif //GAMERPG_ACTIONEXCEPTION_HPP

//
// Created by gordo on 01.10.18.
//

#ifndef GAMERPG_DEADTARGETATTACKEXCEPTION_HPP
#define GAMERPG_DEADTARGETATTACKEXCEPTION_HPP

#include "ActionException.hpp"

namespace Core {
    class DeadTargetAttackException : public ActionException {
    public:
        DeadTargetAttackException() {};

        explicit DeadTargetAttackException(Action &action) : ActionException(action) {};
    };
};


#endif //GAMERPG_DEADTARGETATTACKEXCEPTION_HPP

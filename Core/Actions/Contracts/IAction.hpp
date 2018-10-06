//
// Created by gordo on 06.10.18.
//

#ifndef GAMERPG_IACTION_HPP
#define GAMERPG_IACTION_HPP

#include "../../Objects/Item.hpp"

namespace Core {
    class IAction {
    public:
        /**
         * Here is where the action logic resides.
         * Complex actions may have various PreActions and PostActions.
         * Each of those PreActions And PostActions can have different Preconditions.
         *
         * Note: If in the list of preActions one of them fails then this action will not
         * get executed, if a the action gets executed and any PostAction fails there is no
         * rollback, the action was already executed, therefore check that the preconditions are
         * represent the reality and that the actions do not contradict them selves.
         */
        virtual void action() = 0;

        /**
         * Careful when overwriting this method, is method.
         * It is used in order to complete an action.
         */
        virtual void handle() = 0;


        /**
         * If more items are needed as reward a list of actions.
         *
         * @return Gets the reward after the action is done.
         */
        virtual const Item *reward() = 0;

        virtual void addPreAction(IAction &action) = 0;

        virtual void addPostAction(IAction &action) = 0;
    };
};

#endif //GAMERPG_IACTION_HPP

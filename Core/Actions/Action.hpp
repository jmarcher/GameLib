//
// Created by gordo on 30.09.18.
//

#ifndef GAMERPG_ACTION_HPP
#define GAMERPG_ACTION_HPP

#include <list>
#include "../Characters/Character.hpp"
#include "Exceptions/ActionException.hpp"
#include "../Exceptions/Handler.hpp"

namespace Core {
    class Action {
    public:

        Action(Character &firstActor, Character &secondActor) {
            this->firstActor = &firstActor;
            this->secondActor = &secondActor;
        };

        void handle();




        /**
         * If more items are needed as reward a list of actions.
         *
         * @return Gets the reward after the action is done.
         */
        Item reward();


        void addPreAction(Action &action) {
            this->preActions.push_back(&action);
        };

        void addPostAction(Action &action) {
            this->postActions.push_back(&action);
        };

    protected:
        Character *firstActor;
        Character *secondActor;
        std::list<Action *> preActions;
        std::list<Action *> postActions;

        bool beforeActions();

        bool afterActions();

        void assertPreConditions() const;

        void assertPostConditions() const;
    };
};


#endif //GAMERPG_ACTION_HPP

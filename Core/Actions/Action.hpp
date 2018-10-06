//
// Created by gordo on 30.09.18.
//

#ifndef GAMERPG_ACTION_HPP
#define GAMERPG_ACTION_HPP

#include <list>
#include "../Characters/Character.hpp"
#include "../Exceptions/Handler.hpp"
#include "Contracts/IAction.hpp"

namespace Core {
    class Action: public IAction {
    public:

        Action(Character &firstActor, Character &secondActor) {
            this->firstActor = &firstActor;
            this->secondActor = &secondActor;
            this->item = nullptr;
        };

        Action(Character &actor, Item &item) {
            this->firstActor = &actor;
            this->secondActor = nullptr;
            this->item = &item;
        };


        /**
         * Careful when overwriting this method, is method.
         * It is used in order to complete an action.
         */
        void handle();

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
         * If more items are needed as reward a list of actions.
         *
         * @return Gets the reward after the action is done.
         */
        const Item * reward();


        void addPreAction(IAction &action) {
            this->preActions.push_back(&action);
        };

        void addPostAction(IAction &action) {
            this->postActions.push_back(&action);
        };

        void setFirstActor(Character *firstActor);

        void setSecondActor(Character *secondActor);

        virtual ~Action();

    protected:
        // Properties
        Character *firstActor;
        Character *secondActor;
        Item *item;
        std::list<IAction *> preActions;
        std::list<IAction *> postActions;


        // Protected methods
        bool beforeActions();

        bool afterActions();

        void assertPreConditions() const {};

        void assertPostConditions() const {};
    };
};


#endif //GAMERPG_ACTION_HPP

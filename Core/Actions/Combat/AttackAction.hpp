//
// Created by gordo on 01.10.18.
//

#ifndef GAMERPG_ATTACKACTION_HPP
#define GAMERPG_ATTACKACTION_HPP

#include "../Action.hpp"
#include "../../Characters/Player.hpp"

namespace Core {
    class AttackAction : public Action {
    public:
        AttackAction(Player &player, Character &victim) : Action(player, victim) {

        };

        void action() override {
            this->secondActor->setHP(this->secondActor->getHP() - 10);
        };
    };
};


#endif //GAMERPG_ATTACKACTION_HPP

//
// Created by gordo on 01.10.18.
//

#include "AttackAction.hpp"

#include "../Exceptions/DeadTargetAttackException.hpp"

void Core::AttackAction::assertPreConditions() const {
    Action::assertPreConditions();
    if (this->firstActor->isDead() || this->secondActor->isDead()) {
        throw new DeadTargetAttackException();
    }
}

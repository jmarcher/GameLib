//
// Created by gordo on 30.09.18.
//

#include "Action.hpp"
#include "../Exceptions/Handler.hpp"
#include "Exceptions/ActionException.hpp"

bool Core::Action::beforeActions() {
    // We process all actions that are marked as preActions
    // we use the actions handle function for that.
    // after that we should check if the preconditions are matched
    try {
        for (auto const &action: this->preActions) {
            action->handle();
        };
    } catch (ActionException &e) {
        ExceptionHandler::getInstance()->addException(e);
        return false;
    }

    this->assertPreConditions();

    return true;
};


bool Core::Action::afterActions() {

    this->assertPostConditions();

    try {
        for (auto const &action: this->postActions) {
            action->handle();
        };
    } catch (ActionException &e) {
        ExceptionHandler::getInstance()->addException(e);
        return false;
    }

    return true;
};

void Core::Action::handle() {
    this->beforeActions();
    this->action();
    // TODO: Give rewards if needed (or make action give it)
    this->afterActions();
}

Core::Action::~Action() {
    this->firstActor = nullptr;
    this->secondActor = nullptr;
    this->item = nullptr;
    this->preActions.clear();
    this->postActions.clear();
};

void Core::Action::setFirstActor(Core::Character *firstActor) {
    Action::firstActor = firstActor;
};

void Core::Action::setSecondActor(Core::Character *secondActor) {
    Action::secondActor = secondActor;
}

const Core::Item *Core::Action::reward() {
    return nullptr;
};

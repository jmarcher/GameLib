//
// Created by gordo on 22.09.18.
//

#include "Relation.hpp"
#include "../../Actions/Action.hpp"

Core::Relation::Relation(Character &character1, Character &character2) {
    this->character1 = &character1;
    this->character2 = &character2;
}

Core::Relation::Relation(Core::Character &character1, Core::Character &character2, Core::RelationType relationType) {
    this->character1 = &character1;
    this->character2 = &character2;
    this->relationType = relationType;
}

Core::RelationType Core::Relation::getRelationType() const {
    return relationType;
}

void Core::Relation::setRelationType(Core::RelationType relationType) {
    Relation::relationType = relationType;
}

Core::Character *Core::Relation::getCharacter1() const {
    return character1;
}

void Core::Relation::setCharacter1(Core::Character *character1) {
    Relation::character1 = character1;
}

Core::Character *Core::Relation::getCharacter2() const {
    return character2;
}

void Core::Relation::setCharacter2(Core::Character *character2) {
    Relation::character2 = character2;
}

short Core::Relation::getGrade() const {
    return grade;
}

void Core::Relation::setGrade(short grade) {
    Relation::grade = grade;
}

Core::Relation::Relation(Core::Character &relatedWith, Core::RelationType relationType, signed short int grade) {
    this->character1 = &relatedWith;
    this->character2 = nullptr;
    this->relationType = relationType;
    this->grade = grade;
}

Core::Relation::Relation(Core::Character &firstActor, Core::Character &relatedWith, Core::RelationType relationType,
                         signed short int grade) {
    this->character1 = &firstActor;
    this->character2 = &relatedWith;
    this->relationType = relationType;
    this->grade = grade;
}

bool Core::Relation::attemptAction(Core::Action *action) const {
    // FIXME: Do I need to change the actors?
    action->setFirstActor(this->character1);
    action->setFirstActor(this->character2);
    action->handle();
    return true;
};

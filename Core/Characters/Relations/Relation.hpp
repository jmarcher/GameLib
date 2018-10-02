//
// Created by gordo on 22.09.18.
//

#ifndef GAMERPG_RELATION_HPP
#define GAMERPG_RELATION_HPP


namespace Core {
    // Define class name
    class Character;

    enum RelationType {
        HATE = 0, LOVE = 1, TRUST = 2, RESPECT = 3, HONOR = 4,

    };

    class Relation {
    public:
        Relation(RelationType relationType) {
            this->relationType = relationType;
        };

        Relation(Character &character1, Character &character2);

        explicit Relation(Character &character1, Character &character2, RelationType relationType);

        Relation(Character &relatedWith, RelationType relationType, signed short int grade);

        Relation(Character &firstActor, Character &relatedWith, RelationType relationType, signed short int grade);

        RelationType getRelationType() const;

        void setRelationType(RelationType relationType);

        Character *getCharacter1() const;

        void setCharacter1(Character *character1);

        Character *getCharacter2() const;

        void setCharacter2(Character *character2);

        signed short int getGrade() const;

        void setGrade(signed short int grade);

    protected:
        RelationType relationType;
        Character *character1;
        Character *character2;

        /**
         * Grades:
         * 0 = Neutral
         * 100 = 100% Agrees with relationType
         * -100 = 100% Disagrees with relationType
         * All values in between are a grade of 'Relation'
         */
        signed short int grade;
    };
};


#endif //GAMERPG_RELATION_HPP

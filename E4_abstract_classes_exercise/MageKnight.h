#ifndef E4_ABSTRACT_CLASSES_EXERCISE_MAGEKNIGHT_H
#define E4_ABSTRACT_CLASSES_EXERCISE_MAGEKNIGHT_H

#include "Knight.h"
#include "Wizard.h"

class MageKnight : public  Wizard, public  Knight{
public:
    explicit MageKnight(const std::string &n, int d, int hp, int armor, int m);


    void move(int x, int y) override;
    int fight(GameCharacter &enemy) override;

    virtual char getCharacterSymbol() const override {
        return 'M';
    }

};


#endif //E4_ABSTRACT_CLASSES_EXERCISE_MAGEKNIGHT_H

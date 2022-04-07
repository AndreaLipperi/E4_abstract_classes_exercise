//
// Created on: 13/mar/2018
//  Author: bertini
//

#ifndef WEAPON_H
#define WEAPON_H

class Weapon {
public:

    Weapon(int s, bool m = false);
    int use();

    int getStrength();
    void setStrength(int s);
    bool getMagic();
    void setMagic(bool m);
protected:
    int strength;
    bool magic;
};
#endif //WEAPON_H

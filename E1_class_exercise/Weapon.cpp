//
// Created on: 13/mar/2018
// Author: bertini
//

#include "Weapon.h"


int Weapon::use() {

    if (magic==true){
        strength=strength*2;
        return strength;
    } else {
        return strength;
    }
}

Weapon::Weapon(int s, bool m)  {
    strength = s;
    magic = m;
}
int Weapon::getStrength(){
    return strength;
}
void Weapon::setStrength(int s) {
    strength=s;
}
bool Weapon::getMagic() {
    return magic;
}
void Weapon::setMagic(bool m){
    magic=m;
}
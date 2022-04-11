#include "Bow.h"

Bow::Bow(int strength, int ar, bool magic) : Weapon(strength, magic), arrows(ar) {

}
Bow* Bow::clone() const {
    return new Bow(*this);
}



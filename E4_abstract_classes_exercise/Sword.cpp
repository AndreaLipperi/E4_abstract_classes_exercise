#include "Sword.h"

Sword::Sword(int s, bool m, bool v) : Weapon(s, m), valirian(v) {
    // there could be some more code here...
    // or just keep it empty, as it makes more sense
}

Sword* Sword::clone() const {
    return new Sword(*this);
}
// Call basicUse() and if valirian double the damage


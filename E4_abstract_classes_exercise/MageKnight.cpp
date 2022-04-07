#include "MageKnight.h"


MageKnight::MageKnight(const std::string &n, int d, int hp, int armor, int m) : Wizard(n, m, hp, armor), Knight(n, d, hp,armor, false)   {
}

int MageKnight::fight(GameCharacter &enemy) {
    int result = 0;
    // specific code...
    result += Knight::fight(enemy);
    // more code...
    return result;
}

void MageKnight::move(int x, int y) {
    Wizard::move(x, y);
}

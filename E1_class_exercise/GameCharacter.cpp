/*
 * Character.cpp
 *
 *  Created on: 13/mar/2018
 *  Author: bertini
 */

#include "GameCharacter.h"

#include <ctime>
#include <iostream>

using namespace std;

GameCharacter::GameCharacter(int hp, int a) {
    HP=hp;
    armor=a;
    posX=0;
    posY=0;
    weapon = 0;
    // position and weapon must be set to 0 or null pointer
}

int GameCharacter::getHP() {
    return HP;
}

void GameCharacter::setHP(int hp) {
    this->HP = hp;
}

Weapon* GameCharacter::getWeapon() {
    return weapon;
}

void GameCharacter::setWeapon(Weapon* weapon) {
    this->weapon = weapon;
}

void GameCharacter::move(int x, int y) {
    posX+=x;
    posY+=y;

}

void GameCharacter::move(int distance) {
    posX += distance;
    posY += distance;
}
int GameCharacter::getArmor() {
    return armor;
}

void GameCharacter::setArmor(int defense) {
    this->armor = defense;
}

bool GameCharacter::fight(GameCharacter &enemy) {
    int hit = 1;

    if (weapon) {
        hit=weapon->use();
    }
    int damage = 0;

    if (hit>enemy.armor){
        damage=enemy.receiveDamage(hit);
    }

    bool success = false;
    if (damage) {
        cout << "You hit the enemy ! (HP: "<<enemy.HP<< " points)" << endl;
        success = true;
    } else {
    cout << "You miss the hit..." << endl;
    }
    return success;
}

int GameCharacter::receiveDamage(int points) {
    if (armor>4) {
        points /=3;
    } else if (armor>2) {
        points /=2;
    } else if (armor >=1) {
        points -= 2;
    }
    if (points <= 0)
        points = 1;

    HP -= points;
    if (points > 10)
        armor--;

    return points;
}
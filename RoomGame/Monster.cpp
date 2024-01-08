#include "Monster.h"
#include <iostream>

Monster::Monster(const std::string& n) : Character(n, 100) {}

void Monster::move() {
    std::cout << "Monster is moving towards you!" << std::endl;
}

void Monster::interact() {
    move();
}

void Monster::attack(Character& target) {
    std::cout << "Monster attacks " << target.name << "!" << std::endl;
    target.healthPoints -= 10;
}


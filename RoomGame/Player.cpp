#include "Player.h"
#include <iostream>

Player::Player(const std::string& n) : Character(n, 100) {}

void Player::move() {
    std::cout << "You move to another room." << std::endl;
    healthPoints -= 10;
}

void Player::interact() {
    move();
}

void Player::attack(Character& target) {
    std::cout << "You attack " << target.name << "!" << std::endl;
    target.healthPoints -= 20;
}


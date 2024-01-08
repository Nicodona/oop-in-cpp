#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"

class Player : public Character {
public:
    Player(const std::string& n);
    void move() override;
    void interact() override;
    void attack(Character& target) override;
};

#endif // PLAYER_H


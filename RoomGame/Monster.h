#ifndef MONSTER_H
#define MONSTER_H

#include "Character.h"

class Monster : public Character {
public:
    Monster(const std::string& n);
    void move() override;
    void interact() override;
    void attack(Character& target) override;
};

#endif // MONSTER_H


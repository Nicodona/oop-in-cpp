#ifndef CHARACTER_H
#define CHARACTER_H

#include "GameObject.h"

#include <string>

class Character : public GameObject {
protected:
    std::string name;
    int healthPoints;

public:
    Character(const std::string& n, int hp);
    virtual void move() = 0;
    virtual void attack(Character& target) = 0;
};

#endif // CHARACTER_H


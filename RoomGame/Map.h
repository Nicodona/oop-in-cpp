#ifndef MAP_H
#define MAP_H

#include "GameObject.h"
#include "Player.h"
#include "Monster.h"
#include "Room.h"

#include <vector>

class Map : public GameObject {
private:
    std::vector<std::vector<Room* > > rooms;
    Player* player;
    Monster* monster;

public:
    Map(int rows, int cols);
    void interact() override;
    void startGame();
};

#endif // MAP_H


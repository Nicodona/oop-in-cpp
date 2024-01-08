#ifndef GAME_H
#define GAME_H

#include "Map.h"

class Game {
private:
    Map* gameMap;

public:
    Game();
    ~Game();
    void startGame();
};

#endif // GAME_H


#ifndef POISONOUSROOM_H
#define POISONOUSROOM_H

#include "Room.h"

class PoisonousRoom : public Room {
public:
    PoisonousRoom(int id);
    void interact() override;
    bool isWinningRoom() const override;
};

#endif // POISONOUSROOM_H


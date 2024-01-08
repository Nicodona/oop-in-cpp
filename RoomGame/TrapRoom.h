#ifndef TRAPROOM_H
#define TRAPROOM_H

#include "Room.h"

class TrapRoom : public Room {
public:
    TrapRoom(int id);
    void interact() override;
    bool isWinningRoom() const override;
};

#endif // TRAPROOM_H


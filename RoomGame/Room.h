#ifndef ROOM_H
#define ROOM_H

#include "GameObject.h"

class Room : public GameObject {
protected:
    int roomId;

public:
    Room(int id);
    void interact() override;
    virtual bool isWinningRoom() const = 0;
};

#endif // ROOM_H


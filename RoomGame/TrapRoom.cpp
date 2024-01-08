#include "TrapRoom.h"
#include <iostream>

TrapRoom::TrapRoom(int id) : Room(id) {}

void TrapRoom::interact() {
    std::cout << "Entered Trap Room " << roomId << ", game over!" << std::endl;
    exit(0);
}

bool TrapRoom::isWinningRoom() const {
    return false;
}


#include "PoisonousRoom.h"
#include <iostream>

PoisonousRoom::PoisonousRoom(int id) : Room(id) {}

void PoisonousRoom::interact() {
    std::cout << "Entered Poisonous Room " << roomId << ", health decreased by 50 points!" << std::endl;
}

bool PoisonousRoom::isWinningRoom() const {
    return false;
}


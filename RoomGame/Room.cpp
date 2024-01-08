#include "Room.h"
#include <iostream>

Room::Room(int id) : roomId(id) {}

void Room::interact() {
    std::cout << "Entered Room " << roomId << std::endl;
}


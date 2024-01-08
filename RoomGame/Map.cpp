#include "Map.h"
#include "PoisonousRoom.h"
#include "TrapRoom.h"
#include <cstdlib>  // Include for rand
#include <ctime>    // Include for seeding the random number generator
#include <iostream>

Map::Map(int rows, int cols) {
    // Seed the random number generator
    std::srand(std::time(0));

    rooms.resize(rows, std::vector<Room*>(cols, NULL));

    // Initialize rooms
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i == rows - 1 && j == cols - 1) {
                rooms[i][j] = new PoisonousRoom(i * cols + j + 1);
            
//			} else if (i == rows / 2 && j == cols / 2) {
//                rooms[i][j] = new Room (i * cols + j + 1); // this we have to create a new object to represent save rooms
                
            } else {
                rooms[i][j] = new TrapRoom(i * cols + j + 1); 
            }
        }
    }

    // Initialize player and monster
    player = new Player("Player");
    monster = new Monster("Monster");
}

// Rest of the Map.cpp file...


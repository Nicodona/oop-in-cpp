#include "Game.h"

Game::Game() {
    gameMap = new Map(4, 4);  // Adjust the dimensions as needed
}

Game::~Game() {
    delete gameMap;
}

void Game::startGame() {
    gameMap->startGame();
}


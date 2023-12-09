#include "game.cpp"
#include <iostream>

void Game::onExit() {}
void Game::beforeStart() {}
void Game::tick() {
    std::cout << "tick" << std::endl;
}

int main() {
    auto game = Game();

    return game.run();
}

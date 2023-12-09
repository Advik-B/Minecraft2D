#include <SFML/Graphics.hpp>

class Game {
    public:
        Game();
        void run();
        void onExit() {};
        void beforeStart() {};
    private:
        sf::RenderWindow window;
        void processEvents();
        void update();
        void render();
};

Game::Game() {
    sf::RenderWindow window(
            sf::VideoMode::getDesktopMode(),
            "SFML works!",
            sf::Style::Fullscreen,
            sf::ContextSettings(24, 8, 4)
    );
}

void Game::run() {
    while (window.isOpen()) {
        processEvents();
        update();
        render();
    }
}



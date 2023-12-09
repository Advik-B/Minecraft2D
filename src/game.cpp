#include <SFML/Graphics.hpp>
#include "colour_utils.cpp"

class Game {
    public:
        Game();
        int run();
        void onExit();
        void beforeStart();
        void setTickRate(int tickRate);
        void tick();

    private:
        sf::RenderWindow window;
        sf::Color backgroundColour;
        sf::Event event;
        int tickRate = 60;
        int tickCount = 0;

        void processEvents();
        void update();
        void render();
        void keyPress(sf::Event::KeyEvent event);
        void keyRelease(sf::Event::KeyEvent event);
};

Game::Game() {
    window.create(
        sf::VideoMode::getDesktopMode(),
        "Minecraft 2D",
        sf::Style::Fullscreen,
        sf::ContextSettings(24, 8, 4)
    );
    window.setVerticalSyncEnabled(true);
    backgroundColour = rgb(31, 32, 40);
}

int Game::run() {
    beforeStart();
    this->tickCount = 0;
    while (window.isOpen()) {
        processEvents();
        update();
        render();

    }
    onExit();
    return 0;
}

void Game::processEvents() {
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
            break;
        }

        else if (event.type == sf::Event::KeyPressed) {
            keyPress(event.key);
        }

        else if (event.type == sf::Event::KeyReleased) {
            keyRelease(event.key);
        }
    }
}

void Game::update() {
    tickCount++;
    if (tickCount >= tickRate) {
        tick();
        tickCount = 0;
    }
}

void Game::render() {
    window.clear(backgroundColour);
    window.display();
}

void Game::keyPress(sf::Event::KeyEvent event) {
    if (event.code == sf::Keyboard::Escape) {
        window.close();
    }
}

void Game::keyRelease(sf::Event::KeyEvent event) {}

void Game::setTickRate(int tickRate) {
    this->tickRate = tickRate;
}

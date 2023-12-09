#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
#include "colour_utils.cpp"
#include "gameclasses/block.cpp"

class Game {
    public:
        Game();
        ~Game();

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

        std::vector<Block> blocks;
        sf::Sprite sprite;
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

    TextureLoader::TextureMap textureMap = TextureLoader::loadTextures();
    Block block = Block();
    block.setTexture("dirt", textureMap);
    block.setPos(sf::Vector2f(100, 100));
    blocks.push_back(block);
    for (auto block : blocks) {
//        block.texture.load();
    }
    sf::Texture texture;
    texture.loadFromFile("stone.png");

    // Resize the sprite to 512x512 pixels
    texture.setSmooth(true);
    texture.setRepeated(true);

    sf::Sprite sprite;
//    sprite.setScale(10, 10);
    sprite.setTexture(texture);
    sprite.setPosition(100, 100);
    this->sprite = sprite;

}

Game::~Game() {
    window.close();
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
    for (auto block : blocks) {
        block.drawTo(&window);
    }
    window.draw(sprite);

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

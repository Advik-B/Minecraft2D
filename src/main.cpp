#include <SFML/Graphics.hpp>

#include "textureLoader.cpp"

sf::Texture* makeGrassTexture(TextureLoader& textureLoader, sf::Vector2i size = sf::Vector2i(18, 18)) {
    // Texture Size MUST be a multiple of 18 or it will get rounded down to the nearest multiple of 18
    sf::Texture* texture = new sf::Texture();
    texture->create(size.x, size.y);
    // Set the texture to repeat
    texture->setRepeated(true);
    // First and last tile
    sf::Texture* startGrass = textureLoader.getTile(2, 2);
    sf::Texture* endGrass = textureLoader.getTile(4, 2);
    // Middle tile
    sf::Texture* midGrass = textureLoader.getTile(3, 2);

    // Make the grass texture
    // First tile
    texture->update(*startGrass, 0, 0);
    // Middle tiles
    for (unsigned int x = startGrass->getSize().x; x < size.x - endGrass->getSize().x; x += midGrass->getSize().x) {
        texture->update(*midGrass, x, 0);
    }
    // Last tile, make sure to account for the spacing between each tile
    texture->update(*endGrass, size.x - endGrass->getSize().x, 0);
    // Height, use dirt texture
    sf::Texture* dirt = textureLoader.getTexture(TextureIDs::DIRT_1);
    for (unsigned int y = startGrass->getSize().y; y < size.y - dirt->getSize().y; y += dirt->getSize().y) {
        texture->update(*dirt, 0, y);
    }
    // Last row, use brick texture
    sf::Texture* brick = textureLoader.getTexture(TextureIDs::BRICK);
    texture->update(*brick, 0, size.y - brick->getSize().y);

    return texture;
}

int main() {
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
    // Borderless fullscreen
    sf::RenderWindow window(sf::VideoMode(desktop.width, desktop.height), "ImGui + SFML = <3", sf::Style::None);
    // sf::RenderWindow window(sf::VideoMode(1280, 720), "ImGui + SFML = <3");
    window.setVerticalSyncEnabled(true);

    TextureLoader textureLoader;
    // Make a grass texture
    sf::Texture* grassTexture = makeGrassTexture(textureLoader, {100, 54});
    sf::Sprite sprite(*grassTexture);
    sprite.setPosition(100, 100);
    sprite.setScale(4, 4);

    sf::Event event;
    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Escape) {
                    window.close();
                }
            }
        }

        window.clear();
        window.draw(sprite);
        window.display();
    }
    return 0;
}

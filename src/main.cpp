#include <SFML/Graphics.hpp>
#include "colour_utils.cpp"
#include "gameclasses/block.cpp"
//#include "gameclasses/texture.cpp"

int main() {
    sf::RenderWindow window(
        sf::VideoMode::getDesktopMode(),
        "Minecraft 2D",
        sf::Style::Fullscreen,
        sf::ContextSettings(24, 8, 4)
    );
    window.setVerticalSyncEnabled(true);
    sf::Color backgroundColour = rgb(31, 32, 40);

    TextureLoader::TextureMap textureMap = TextureLoader::loadTextures();
    Block block = Block();
    block.setTexture("dirt", textureMap);
    block.setPos(sf::Vector2f(100, 100));
    std::vector<Block> blocks;
    blocks.push_back(block);
    for (auto block : blocks) {
        block.texture.load();
    }
    sf::Texture texture;
    texture.loadFromFile("stone.png");

    // Resize the sprite to 512x512 pixels
    texture.setRepeated(true);

    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.setPosition(100, 100);
    sprite.setScale(10, 10);

   for (auto block : blocks) {
        block.texture.load();
   }

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
                window.close();
            }
        }

        window.clear(backgroundColour);
        for (auto block : blocks) {
            window.draw(block.getSprite());
        }
        window.draw(sprite);
        window.display();
    }

    return 0;
}
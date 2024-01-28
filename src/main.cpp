#include <SFML/Graphics.hpp>

#include "textureLoader.cpp"

#define keyPress(key) sf::Keyboard::isKeyPressed(sf::Keyboard::key)
#define keyPressDelay 0.1f // Seconds

#include <iostream>

sf::Vector2i getWindowCenterPos(sf::Vector2u screenSize, sf::Vector2u windowSize) {
    // Returns the center position of the window on the screen
    // Keep in mind that the window size is not the same as the screen size
    // First, convert the window size and screen size to normal integers (sf::Vector2u -> sf::Vector2i)
    auto windowSizeI = static_cast<sf::Vector2i>(windowSize);
    auto screenSizeI = static_cast<sf::Vector2i>(screenSize);

    return {(screenSizeI.x / 2) - (windowSizeI.x / 2), (screenSizeI.y / 2) - (windowSizeI.y / 2)};

}

void toggleFullscreen(sf::RenderWindow &window, bool &fullscreen, sf::Vector2i &windowPos, sf::Vector2u &windowSize) {
    // Toggle fullscreen
    if (fullscreen) {
        window.create(sf::VideoMode::getDesktopMode(), "ImGui + SFML = <3", sf::Style::None);
    }
    else {
        window.create(sf::VideoMode(windowSize.x, windowSize.y), "ImGui + SFML = <3", sf::Style::Default);
        window.setPosition(windowPos);
    }
    fullscreen = !fullscreen;
}

sf::Vector2u operator/= (sf::Vector2u &vec, int div) {
    vec.x /= div;
    vec.y /= div;
    return vec;
}

int main() {
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
    // Borderless fullscreen
    sf::RenderWindow window(sf::VideoMode(desktop.width, desktop.height), "ImGui + SFML = <3", sf::Style::None);

    // Vsync
    window.setVerticalSyncEnabled(true);

    sf::Vector2u windowSize = window.getSize();
    sf::Vector2i windowPos = getWindowCenterPos({desktop.width, desktop.height}, windowSize);

    windowSize /= 2;
    sf::Event event;
    sf::Color bgColor = {31, 32, 40, 255};
    bool fullscreen = false;

    TextureLoader loader;
    sf::Sprite sprite;

    sprite.setTexture(*loader.getTile(10, 10));
    sprite.setPosition(0, 0);
    sprite.setScale(2, 2);

    // Print all the texture aliases
    for (auto &alias : loader.getTextureAliases()) {
        std::cout << alias.first.toAnsiString() << ": " << alias.second.x << ", " << alias.second.y << std::endl;
    }

    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Escape) {
                    window.close();
                }
                else if (event.key.code == sf::Keyboard::F11) {
                    toggleFullscreen(window, fullscreen, windowPos, windowSize);
                }
                // Sleep for a bit to prevent spamming
                sf::sleep(sf::seconds(keyPressDelay));
            }

            if (event.type == sf::Event::Resized) {
                windowSize = window.getSize();
                windowPos = window.getPosition();
            }
        }
        window.clear(bgColor);
        window.display();
    }
    return 0;
}

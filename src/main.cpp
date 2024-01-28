#include <SFML/Graphics.hpp>

#include "textureLoader.cpp"

int main() {
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
    // Borderless fullscreen
    sf::RenderWindow window(sf::VideoMode(desktop.width, desktop.height), "ImGui + SFML = <3", sf::Style::None);
    // sf::RenderWindow window(sf::VideoMode(1280, 720), "ImGui + SFML = <3");
    window.setVerticalSyncEnabled(true);

    sf::Event event;
    sf::Color bgColor = {31, 32, 40, 255};
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
        window.clear(bgColor);
        window.display();
    }
    return 0;
}

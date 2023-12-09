#include <SFML/Graphics.hpp>
#include <string>
#include <map>
#include "texture.cpp"


class Block {
    public:
        Block();
        void setTexture(std::string texture, std::map<std::string, Texture> textureMap);

    private:
        sf::Sprite sprite;
        Texture texture;


};

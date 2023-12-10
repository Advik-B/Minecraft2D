#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderTarget.hpp>
#include <string>
#include <map>
#include "texture.cpp"

struct BlockAttributes {
    int hardness;
    int resistance; // to explosions
    int emmisivity; // light level

};



class Block {
    public:
        Block();
        void setTexture(std::string texture, std::map<std::string, Texture> textureMap);
        void drawTo(sf::RenderWindow target);
        void drawTo(sf::RenderTarget *target);
        void drawTo(sf::RenderTarget &target);
        void setAttributes(BlockAttributes attributes);
        void setPos(sf::Vector2f pos);
        void move(sf::Vector2f offset);
        sf::Sprite Block::getSprite();
        Texture texture;

    private:
        sf::Sprite sprite;
        BlockAttributes attributes;
};

Block::Block() {
    this->sprite = sf::Sprite();
}

void Block::setTexture(std::string texture, TextureLoader::TextureMap textureMap) {
    this->texture = textureMap[texture];
    this->sprite.setTexture(this->texture.getTexture());
}

sf::Sprite Block::getSprite() {
    return this->sprite;
}

void Block::setAttributes(BlockAttributes attributes) {
    this->attributes = attributes;
}

void Block::setPos(sf::Vector2f pos) {
    this->sprite.setPosition(pos);
}

void Block::move(sf::Vector2f offset) {
    this->sprite.move(offset);
}


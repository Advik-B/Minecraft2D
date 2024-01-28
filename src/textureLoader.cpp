#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Rect.hpp>

#define textureLoaderBasePath "assets/textures/"

#define tileMapFile textureLoaderBasePath "tilemap.png"

// Each tile is 18x18 pixels
#define tileWidth 18
// Space between each tile
#define tileSpacing 1

// Enum for texture IDs
enum class TextureIDs {
    GRASS, STARTGRASS, MIDGRASS, ENDGRASS, DIRT_0, DIRT_1, BRICK
};

class TextureLoader {
public:
    TextureLoader();
    ~TextureLoader();

    sf::Texture* getTexture(TextureIDs id);
    sf::Texture* getTilemap() const;
    sf::Texture* getTile(int x, int y) const;
private:
    std::map<TextureIDs, sf::Texture*> textures;
    sf::Texture* tilemap;
    sf::Texture* loadTexture(const std::string& path);
};

TextureLoader::TextureLoader() {
    // Load the tilemap
    tilemap = new sf::Texture();
    if (!tilemap->loadFromFile(tileMapFile)) {
        throw std::runtime_error("Failed to load texture: " + std::string(tileMapFile));
    }
    // Iterate over the tilemap and create textures for each tile
    // Dont forget to account for the spacing between each tile
    // Dont create sprites, only textures
    for (unsigned int y = 0; y < tilemap->getSize().y; y += tileWidth + tileSpacing) {
        for (unsigned int x = 0; x < tilemap->getSize().x; x += tileWidth + tileSpacing) {
            // Create a texture for each tile
            auto* texture = new sf::Texture();
            // Create a rect for the tile
            sf::IntRect rect(x, y, tileWidth, tileWidth);
            // Load the texture from the tilemap
            texture->loadFromImage(tilemap->copyToImage(), rect);
            // Add the texture to the map
            textures[static_cast<TextureIDs>(textures.size())] = texture;
        }
    }
}

TextureLoader::~TextureLoader() {
    // Delete all textures
    for (auto& texture : textures) {
        delete texture.second;
    }
    delete tilemap;
}

sf::Texture* TextureLoader::getTexture(TextureIDs id) {
    return textures[id];
}

sf::Texture* TextureLoader::getTilemap() const {
    return tilemap;
}

sf::Texture* TextureLoader::getTile(int x, int y) const {
    // Get the tile at the given grid position
    // Dont forget to account for the spacing between each tile
    // Dont create sprites, only textures
    // Create a rect for the tile
    sf::IntRect rect(x * (tileWidth + tileSpacing), y * (tileWidth + tileSpacing), tileWidth, tileWidth);
    // Create a texture for the tile
    auto* texture = new sf::Texture();
    // Load the texture from the tilemap
    texture->loadFromImage(tilemap->copyToImage(), rect);
    return texture;
}

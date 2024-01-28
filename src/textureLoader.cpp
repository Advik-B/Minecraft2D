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


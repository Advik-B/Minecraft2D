#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/System/String.hpp>
#include <map>
#include <memory>

#define textureLoaderBasePath "assets/textures/"
#define tileMapFile textureLoaderBasePath "tilemap.png"
#define tileWidth 18
#define tileSpacing 1

using namespace sf;

typedef Vector2u textureID;

class TextureLoader {
public:
    TextureLoader();
    ~TextureLoader();

    const Texture* getTexture(const String& textureName) const;
    textureID getTextureID(const String& textureName) const;
    const Texture* getTilemap() const;
    const Texture* getTile(int x, int y) const;
    std::map <String, textureID> getTextureAliases() const { return textureAliases; }

private:
    std::map<String, textureID> textureAliases;
    std::unique_ptr<Texture> tilemap;

    void makeStringAliases(); // Make aliases for the texture names (e.g., "player" -> TextureID(0, 0))
};

TextureLoader::TextureLoader() {
    tilemap = std::make_unique<Texture>();
    tilemap->loadFromFile(tileMapFile);
    makeStringAliases();
}

TextureLoader::~TextureLoader() = default;

const Texture* TextureLoader::getTexture(const String& textureName) const {
    textureID texture = getTextureID(textureName);
    return getTile(texture.x, texture.y);
}

textureID TextureLoader::getTextureID(const String& textureName) const {
    return textureAliases.at(textureName);
}

const Texture* TextureLoader::getTilemap() const {
    return tilemap.get();
}

const Texture* TextureLoader::getTile(int x, int y) const {
    IntRect tileRect = {x * (tileWidth + tileSpacing), y * (tileWidth + tileSpacing), tileWidth, tileWidth};
    auto tile = std::make_unique<Texture>();
    tile->loadFromImage(tilemap->copyToImage(), tileRect);
    return tile.release();
}


void TextureLoader::makeStringAliases() {
    textureAliases["grass"] = {0, 0};
}


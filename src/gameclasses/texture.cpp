#define TEXTURE_PATH "assets/textures/"

#include <string>
#include <SFML/Graphics.hpp>
#include <map>
#include <filesystem>
#include <fstream>

namespace fs = std::filesystem;

enum class TextureType
{
    Opaque,
    Transparent,
    Animated,
    Font,
    Filter,

};

enum class TextureCategory
{
    Block,
    Item,
    Entity,
    Font,
    Filter,
};

std::map<std::string, Texture> loadTextures() {
    std::string blockPath = TEXTURE_PATH "block/";
    std::string containerPath = TEXTURE_PATH "container/";
    std::string itemPath = TEXTURE_PATH "item/";
    std::string miscPath = TEXTURE_PATH "misc/";
    std::string mobEffectPath = TEXTURE_PATH "mob_effect/";
    std::string paintingPath = TEXTURE_PATH "painting/";
    std::string titlescreenPath = TEXTURE_PATH "titlescreen/";



}

class Texture
{
    public:
        Texture(std::string path, TextureType type);
        sf::Texture texture;
        TextureType type;
        std::string path;
        bool loaded = false;
        bool load();
        bool isLoaded();
        sf::Texture getTexture();
        TextureType getType();
        std::string getPath();
};

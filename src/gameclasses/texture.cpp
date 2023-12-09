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

    std::map<std::string, Texture> textures;
    // textures["block.dirt"] = Texture(blockPath + "dirt.png", TextureType::Opaque);

    for (const auto & entry : fs::directory_iterator(blockPath)) {
        std::string path = entry.path();
        std::string name = path.substr(path.find_last_of("/") + 1);
        textures["block." + name] = Texture(path, TextureType::Opaque);
    }

    for (const auto & entry : fs::directory_iterator(containerPath)) {
        std::string path = entry.path();
        std::string name = path.substr(path.find_last_of("/") + 1);
        textures["container." + name] = Texture(path, TextureType::Opaque);
    }

    for (const auto & entry : fs::directory_iterator(itemPath)) {
        std::string path = entry.path();
        std::string name = path.substr(path.find_last_of("/") + 1);
        textures["item." + name] = Texture(path, TextureType::Opaque);
    }

    for (const auto & entry : fs::directory_iterator(miscPath)) {
        std::string path = entry.path();
        std::string name = path.substr(path.find_last_of("/") + 1);
        textures["misc." + name] = Texture(path, TextureType::Opaque);
    }

    for (const auto & entry : fs::directory_iterator(mobEffectPath)) {
        std::string path = entry.path();
        std::string name = path.substr(path.find_last_of("/") + 1);
        textures["mob_effect." + name] = Texture(path, TextureType::Opaque);
    }

    for (const auto & entry : fs::directory_iterator(paintingPath)) {
        std::string path = entry.path();
        std::string name = path.substr(path.find_last_of("/") + 1);
        textures["painting." + name] = Texture(path, TextureType::Opaque);
    }

    for (const auto & entry : fs::directory_iterator(titlescreenPath)) {
        std::string path = entry.path();
        std::string name = path.substr(path.find_last_of("/") + 1);
        textures["titlescreen." + name] = Texture(path, TextureType::Opaque);
    }

    return textures;
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

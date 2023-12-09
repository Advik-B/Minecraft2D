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

class Texture
{
    public:
        Texture();
        void setPath(std::string path);
        void setType(TextureType type);
        void setCategory(TextureCategory category);
        void load();
        bool isLoaded();
        sf::Texture getTexture();

    private:
        bool loaded = false;
        sf::Texture texture;
        TextureType type;
        std::string path;
        TextureCategory category;

};

Texture::Texture() {}

void Texture::setPath(std::string path) {
    this->path = path;
}

void Texture::setType(TextureType type) {
    this->type = type;
}

void Texture::setCategory(TextureCategory category) {
    this->category = category;
}

void Texture::load() {
    if (this->loaded) {
        return;
    }

    if (!this->texture.loadFromFile(this->path)) {
        return;
    }

    this->loaded = true;
}

bool Texture::isLoaded() {
    return this->loaded;
}

sf::Texture Texture::getTexture() {
    return this->texture;
}

std::map<std::string, Texture> loadTextures() {
    std::string blockPath = TEXTURE_PATH "block/";
    std::string containerPath = TEXTURE_PATH "container/";
    std::string itemPath = TEXTURE_PATH "item/";
    std::string miscPath = TEXTURE_PATH "misc/";
    std::string mobEffectPath = TEXTURE_PATH "mob_effect/";
    std::string paintingPath = TEXTURE_PATH "painting/";
    std::string titlescreenPath = TEXTURE_PATH "titlescreen/";

    std::map<std::string, Texture> textures;

    // block.grass -> Texture("block/grass.png")

    for (const auto & entry : fs::directory_iterator(blockPath)) {
        const fs::path &path = entry.path();
        fs::path filename = path.filename();
        std::string filenameStr = filename.string();
        std::string name = filenameStr.substr(0, filenameStr.find("."));
        Texture texture = Texture();
        texture.setPath(path.string());
        texture.setType(TextureType::Opaque);
        texture.setCategory(TextureCategory::Block);
        textures["block." + name] = texture;
    }

    for (const auto & entry : fs::directory_iterator(containerPath)) {
        const fs::path &path = entry.path();
        fs::path filename = path.filename();
        std::string filenameStr = filename.string();
        std::string name = filenameStr.substr(0, filenameStr.find("."));
        Texture texture = Texture();
        texture.setPath(path.string());
        texture.setType(TextureType::Opaque);
        texture.setCategory(TextureCategory::Block);
        textures["container." + name] = texture;
    }

    for (const auto & entry : fs::directory_iterator(itemPath)) {
        const fs::path &path = entry.path();
        fs::path filename = path.filename();
        std::string filenameStr = filename.string();
        std::string name = filenameStr.substr(0, filenameStr.find("."));
        Texture texture = Texture();
        texture.setPath(path.string());
        texture.setType(TextureType::Opaque);
        texture.setCategory(TextureCategory::Item);
        textures["item." + name] = texture;
    }

    for (const auto & entry : fs::directory_iterator(miscPath)) {
        const fs::path &path = entry.path();
        fs::path filename = path.filename();
        std::string filenameStr = filename.string();
        std::string name = filenameStr.substr(0, filenameStr.find("."));
        Texture texture = Texture();
        texture.setPath(path.string());
        texture.setType(TextureType::Opaque);
        texture.setCategory(TextureCategory::Item);
        textures["misc." + name] = texture;
    }

    for (const auto & entry : fs::directory_iterator(mobEffectPath)) {
        const fs::path &path = entry.path();
        fs::path filename = path.filename();
        std::string filenameStr = filename.string();
        std::string name = filenameStr.substr(0, filenameStr.find("."));
        Texture texture = Texture();
        texture.setPath(path.string());
        texture.setType(TextureType::Opaque);
        texture.setCategory(TextureCategory::Item);
        textures["mob_effect." + name] = texture;
    }

    for (const auto & entry : fs::directory_iterator(paintingPath)) {
        const fs::path &path = entry.path();
        fs::path filename = path.filename();
        std::string filenameStr = filename.string();
        std::string name = filenameStr.substr(0, filenameStr.find("."));
        Texture texture = Texture();
        texture.setPath(path.string());
        texture.setType(TextureType::Opaque);
        texture.setCategory(TextureCategory::Item);
        textures["painting." + name] = texture;
    }

    for (const auto & entry : fs::directory_iterator(titlescreenPath)) {
        const fs::path &path = entry.path();
        fs::path filename = path.filename();
        std::string filenameStr = filename.string();
        std::string name = filenameStr.substr(0, filenameStr.find("."));
        Texture texture = Texture();
        texture.setPath(path.string());
        texture.setType(TextureType::Opaque);
        texture.setCategory(TextureCategory::Item);
        textures["titlescreen." + name] = texture;
    }

    return textures;
}

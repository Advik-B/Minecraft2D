#include <SFML/Graphics.hpp>
#include <imgui-SFML.h>
#include <imgui.h>
#include <filesystem>
#include <iostream>

#define ASSETS_PATH "assets/"
#define FONT_PATH ASSETS_PATH "font/"

void loadEmojiFont(ImGuiIO &io) {
    using namespace ImGui;
    static ImWchar ranges[] = { 0x1, static_cast<ImWchar>(0x1FFFF), 0 };
    static ImFontConfig cfg;
    cfg.OversampleH = cfg.OversampleV = 1;
    cfg.MergeMode = false;
    io.Fonts->AddFontFromFileTTF("assets/font/NotoColorEmoji.ttf", 109.0f, &cfg, ranges);
    io.Fonts->Build();
}

void loadFonts(ImGuiIO &io) {
    namespace fs = std::filesystem;
    // Default font
    std::string defaultFontPath = FONT_PATH "Satoshi-Bold.otf";
    std::cout << "Loading default font: " << defaultFontPath << std::endl;
    io.Fonts->AddFontFromFileTTF(defaultFontPath.c_str(), 18.f);
    // Noto Color Emoji
    loadEmojiFont(io);
    // Bungee Spice
    std::string bungeeSpiceFontPath = FONT_PATH "BungeeSpice.ttf";
    std::cout << "Loading Bungee Spice font: " << bungeeSpiceFontPath << std::endl;
    io.Fonts->AddFontFromFileTTF(bungeeSpiceFontPath.c_str(), 18.f);
    // Minecraftia
    std::string minecraftiaFontPath = FONT_PATH "Minecraftia.ttf";
    std::cout << "Loading Minecraftia font: " << minecraftiaFontPath << std::endl;
    io.Fonts->AddFontFromFileTTF(minecraftiaFontPath.c_str(), 18.f);

    // Update font texture
    ImGui::SFML::UpdateFontTexture();
}

void setStyle(ImGuiStyle &style) {
    style.WindowRounding = 8.f;
    style.Colors[ImGuiCol_WindowBg] = ImVec4(0.1f, 0.1f, 0.1f, 1.f);
}

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "ImGui + SFML = <3");
    window.setFramerateLimit(60);
    ImGui::SFML::Init(window, false);
    ImGuiIO &io = ImGui::GetIO();
    ImGuiStyle &style = ImGui::GetStyle();

    loadFonts(io);
    // Disable loading and saving of settings
    io.IniFilename = nullptr;

    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    // Set up ImGui style
    setStyle(style);

    sf::Event event;
    sf::Clock deltaClock;
    while (window.isOpen()) {

        while (window.pollEvent(event)) {
            ImGui::SFML::ProcessEvent(event);

            if (event.type == sf::Event::Closed)
                window.close();
        }

        ImGui::SFML::Update(window, deltaClock.restart());

        window.clear();

        // Use the custom font
        ImGui::ShowDemoWindow();
        // Use the default font
        ImGui::Begin("Hello, world!");
        ImGui::Button("Look at this pretty button");
        // Test emoji
        ImGui::Text("Hello, world! \U0001F600");
        ImGui::End();

        window.draw(shape);
        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::SFML::Shutdown();
}

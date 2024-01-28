#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#ifdef _WIN32
#include <Windows.h>
void debug(const char *format, ...)
{
    // Print a message to a console window, if not already present, create one.
    static bool console_created = false;
    if (!console_created)
    {
        AllocConsole();
        freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);
        console_created = true;
    }

    // Print the message to the console window.
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}
#else
#include <iostream>
void debug(const char *format, ...) {
    // Print a message to the console.
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}
#endif


int main(int argc, char *argv[])
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
    debug("Arguments: %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        debug("Argument %d: %s\n", i+1, argv[i]);
    }
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.display();
    }

    return 0;
}
//
// Created by Advik on 10-12-2023.
//

#include <SFML/Graphics.hpp>

#ifndef MINECRAFT2D_ITEMCONTEXT_H
#define MINECRAFT2D_ITEMCONTEXT_H

namespace minecraft {
    namespace items {

        struct ItemContext {
            sf::RenderWindow *window;
            sf::Vector2f *mousePos;
            sf::Vector2f *viewPortSize;
            sf::Vector2f *viewPortCenter;
        };

    } // item
} // minecraft

#endif //MINECRAFT2D_ITEMCONTEXT_H

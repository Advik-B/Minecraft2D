//
// Created by Advik on 10-12-2023.
//

#include "BaseItem.h"

namespace minecraft {
    namespace items {
        BaseItem::BaseItem(const string &itemID) : itemID(itemID) {

        }

        const string &BaseItem::getItemID() const {
            return itemID;
        }

        const sf::Sprite &BaseItem::getItemSprite() const {
            return itemSprite;
        }

        const sf::Sprite &BaseItem::getCursorSprite() const {
            return cursorSprite;
        }

        void BaseItem::setItemSprite(const sf::Sprite &sprite) {
            itemSprite = sprite;
        }

        void BaseItem::setCursorSprite(const sf::Sprite &sprite) {
            cursorSprite = sprite;
        }
    } // items
} // minecraft
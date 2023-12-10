//
// Created by Advik on 10-12-2023.
//

#ifndef MINECRAFT2D_BASEITEM_H
#define MINECRAFT2D_BASEITEM_H

#include <string>
#include <SFML/Graphics/Sprite.hpp>
#include "ItemContext.h"

namespace minecraft {
    using namespace std;
    namespace items {
        enum class ItemType {
            USABLE,
            WEAPON,
            CONSUMABLE,
        };

        class BaseItem {
        public:
            BaseItem() = default;
            virtual ~BaseItem() = default;
            BaseItem(const string &itemID);

            virtual ItemType getItemType() const = 0;
            virtual string getItemName() const = 0;
            virtual string getItemDescription() const = 0;
            virtual const sf::Sprite &getItemSprite() const = 0;
            virtual const sf::Sprite &getCursorSprite() const = 0;
            virtual const string getItemID() const = 0;
            virtual void onEquip(ItemContext &context) = 0;
            virtual void onUnequip(ItemContext &context) = 0;
            virtual void primaryUse(ItemContext &context) = 0;
            virtual void secondaryUse(ItemContext &context) = 0;
            virtual void onTick(ItemContext &context) = 0;
            virtual void onPickup(ItemContext &context) = 0;
            virtual void onDrop(ItemContext &context) = 0;
            virtual void destroy(ItemContext &context) = 0;

        protected:
            virtual void setItemSprite(const sf::Sprite &sprite) = 0;
            virtual void setCursorSprite(const sf::Sprite &sprite) = 0;

        private:
            sf::Sprite cursorSprite; // Will be used for cursor when item is selected
            sf::Sprite itemSprite; // Will be used for inventory and hotbar
            const string itemID; // Unique ID for each item (used for serialization)
        };

    } // items
} // minecraft

#endif //MINECRAFT2D_BASEITEM_H

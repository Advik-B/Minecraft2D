//
// Created by Advik on 10-12-2023.
//

#ifndef MINECRAFT2D_BASEITEM_H
#define MINECRAFT2D_BASEITEM_H

#include <string>

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

        };

    } // items
} // minecraft

#endif //MINECRAFT2D_BASEITEM_H

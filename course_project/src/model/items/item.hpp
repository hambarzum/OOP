#ifndef COURSE_PROJECT_SRC_MODEL_ITEMS_ITEM_HPP
#define COURSE_PROJECT_SRC_MODEL_ITEMS_ITEM_HPP

#include <memory> // std::shared_ptr

#include "item_base.hpp"

namespace model {

class Item : public ItemBase {
public:
    void addItem(ItemBasePtr) override;
    void removeItem(ItemBasePtr) override;
    
private:
    
}; // class Item

using ItemPtr = std::shared_ptr<Item>;

} // namespace model

#endif // COURSE_PROJECT_SRC_MODEL_ITEMS_ITEM_HPP
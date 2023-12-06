#ifndef COURSE_PROJECT_MODEL_ITEMS_ITEM_GROUP_HPP
#define COURSE_PROJECT_MODEL_ITEMS_ITEM_GROUP_HPP

#include <memory> // std::shared_ptr
#include <vector>

#include "item_base.hpp"

namespace model {

class ItemGroup : public ItemBase {
public:
    ItemGroup();
    void addItem(ItemBasePtr) override;
    void removeItem(unsigned int) override;

private:
    std::vector<ItemBasePtr> items_;
}; // class ItemGroup

} // namespace models

#endif // COURSE_PROJECT_MODEL_ITEMS_ITEM_GROUP_HPP
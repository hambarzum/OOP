#include "item_group.hpp"

namespace model {

void ItemGroup::addItem(ItemBasePtr item) {
    items_.push_back(item);
}

void ItemGroup::removeItem(unsigned int id) {
    items_.erase(std::next(items_.begin(), id));
}

} // namespace model
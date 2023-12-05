#include <stdexcept> // std::runtime_error

#include "item.hpp"

namespace model {

void Item::addItem(ItemBasePtr item) {
    throw std::runtime_error("Item::addItem");
}

void Item::removeItem(ItemBasePtr item) {
    throw std::runtime_error("Item::removeItem");
}

} // namespace model
#include <stdexcept> // std::out_of_range

#include "slide.hpp"

namespace model {

void Slide::addItem(ItemPtr item) {
    items_.push_back(item);
    ++itemCount_;
}

void Slide::removeItem(int id) {
    items_.erase(std::next(items_.begin(), id));
    --itemCount_;
}

ItemPtr Slide::getItem(unsigned int id) const {
    if(id > itemCount_) {
        throw std::out_of_range("Item out of range.");
    }
    return items_[id];
}

} // namespace model
#include <stdexcept> // std::runtime_error

#include "slide.hpp"

namespace model {

Slide::Slide() {
    static int id = 0;
    id_ = id++;
}

void Slide::addItem(ItemBasePtr item) {
    items_.push_back(item);
    ++itemCount_;
}

void Slide::removeItem(int id) {
    items_.erase(std::next(items_.begin(), id));
    --itemCount_;
}

ItemBasePtr Slide::getItem(int id) const {
    if(id > itemCount_ || id < 0) {
        throw std::runtime_error("No item found with given id: [" + std::to_string(id) + "]\n");
    }
    return items_[id];
}

} // namespace model
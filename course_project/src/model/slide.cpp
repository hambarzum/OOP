#include <stdexcept> // std::runtime_error

#include "slide.hpp"

namespace model {

Slide::Slide() {

}

void Slide::addItem(ItemBasePtr item) {
    topItem_.addItem(item);
}

ItemBasePtr Slide::getItem(ItemID id) const {
    for(auto item : topItem_) {
        if(item->getID() == id) {
            return item;
        }
    }
    
    throw std::runtime_error("No item found with ID: [" + std::to_string(id) + "]\n");
}

ItemGroup Slide::getTopItem() const {
    return topItem_;
}

int Slide::size() const {
    return topItem_.size();
}

Slide::iterator Slide::begin() {
    return topItem_.begin();
}

Slide::iterator Slide::end() {
    return topItem_.end();
}

Slide::const_iterator Slide::begin() const {
    return topItem_.cbegin();
}

Slide::const_iterator Slide::end() const {
    return topItem_.cend();
}

Slide::const_iterator Slide::cbegin() const {
    return topItem_.cbegin();
}

Slide::const_iterator Slide::cend() const {
    return topItem_.cend();
}

} // namespace model
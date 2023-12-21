#include "item_group.hpp"

namespace model {

ItemGroup::ItemGroup() 
    : ItemBase("Rect")
{

}

void ItemGroup::accept(ItemVisitorPtr visitor) {
    visitor->visitGroup(*this);
}

void ItemGroup::addItem(ItemBasePtr item) {
    items_.push_back(item);
}

int ItemGroup::size() const {
    return items_.size();
}

bool ItemGroup::empty() const {
    return items_.empty();
}

ItemBasePtr ItemGroup::operator[](int pos) {
    return items_[pos];
}

const ItemBasePtr ItemGroup::operator[](int pos) const {
    return items_[pos];
}

void ItemGroup::setShapeType(const std::string& type) {
    for(auto item : items_) {
        item->setShapeType(type);
    }
}

void ItemGroup::setGeometry(const Geometry& geom) {
    for(auto item : items_) {
        item->setGeometry(geom);
    }
}

void ItemGroup::setStyleAttributes(const attributes::StyleAttributes& style) {
    for(auto item : items_) {
        item->setStyleAttributes(style);
    }
}

ItemGroup::iterator ItemGroup::begin() {
    return items_.begin();
}

ItemGroup::iterator ItemGroup::end() {
    return items_.end();
}

ItemGroup::const_iterator ItemGroup::begin() const {
    return items_.cbegin();
}

ItemGroup::const_iterator ItemGroup::end() const {
    return items_.cend();
}

ItemGroup::const_iterator ItemGroup::cbegin() const {
    return items_.cbegin();
}

ItemGroup::const_iterator ItemGroup::cend() const {
    return items_.cend();
}

} // namespace model
#include "item_builder.hpp"

namespace model {

void ItemBuilder::buildItem() {
    buildBoundingBox();
    buildVisualAttributes();
    buildType();
    buildID();
}

ItemBasePtr ItemBuilder::getResult() {
    return item_;
}

void ItemBuilder::buildBoundingBox() {

}

void ItemBuilder::buildVisualAttributes() {

}

void ItemBuilder::buildType() {

}

void ItemBuilder::buildID() {

}

} // namespace model
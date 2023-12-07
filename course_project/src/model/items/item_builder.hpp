#ifndef COURSE_PROJECT_SRC_MODEL_ITEMS_ITEM_BUILDER_HPP
#define COURSE_PROJECT_SRC_MODEL_ITEMS_ITEM_BUILDER_HPP

#include "item_base.hpp"

namespace model {

class ItemBuilder {
public:
    void buildItem();
    ItemBasePtr getResult();

private:
    void buildBoundingBox();
    void buildVisualAttributes();
    void buildType();
    void buildID();

private:
    ItemBasePtr item_;
}; // class ItemBuilder

} // namespace model

#endif // COURSE_PROJECT_SRC_MODEL_ITEMS_ITEM_BUILDER_HPP
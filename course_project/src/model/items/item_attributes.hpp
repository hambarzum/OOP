#ifndef COURSE_PROJECT_MODEL_ITEMS_ITEM_ATTRIBUTES_HPP
#define COURSE_PROJECT_MODEL_ITEMS_ITEM_ATTRIBUTES_HPP

#include <string>

namespace model {

enum class ItemType {
    RECTANGLE,
    CIRCLE,
    LINE,
    GROUP
}; // enum class ItemType





class VisualAttributes {
public:
    /// TODO: implement iterator?

private:
    std::string lineColor_;
    std::string fillColor_;
}; // class VisualAttributes

} // namespace model

#endif // COURSE_PROJECT_MODEL_ITEMS_ITEM_ATTRIBUTES_HPP
#ifndef COURSE_PROJECT_SRC_MODEL_ITEM_HPP
#define COURSE_PROJECT_SRC_MODEL_ITEM_HPP

#include <memory> // std::shared_ptr

namespace model {

struct Position {
    double xCoord;
    double yCoord;
}; // struct Position

class Item {
public:
    void setPosition(const Position&);
    Position getPosition();
    /// TODO: add all other attributes

private:
    Position pos_;
    Type type_;
}; // class IItem

using ItemPtr = std::shared_ptr<Item>;

} // namespace model

#endif // COURSE_PROJECT_SRC_MODEL_ITEM_HPP
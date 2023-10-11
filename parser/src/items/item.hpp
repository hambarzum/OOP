#ifndef PARSER_SRC_ITEMS_ITEM_HPP
#define PARSER_SRC_ITEMS_ITEM_HPP

#include <memory> // std::unique_ptr

struct Position {
    double xCoord;
    double yCoord;
}; // struct Position

class IItem {
public:
    virtual void setPosition(const Position&) = 0;
    virtual Position getPosition() = 0;
    /// TODO: add all other attributes
    virtual ~IItem() = default;
}; // class IItem

using IItemPtr = std::unique_ptr<IItem>;

#endif // PARSER_SRC_ITEMS_ITEM_HPP
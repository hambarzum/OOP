#ifndef PARSER_SRC_ITEMS_RECTANGLE_HPP
#define PARSER_SRC_ITEMS_RECTANGLE_HPP

#include "item.hpp"

class Rectangle : public IItem {
public:
    void setPosition(const Position&) override;
    Position getPosition() override;

private:
    Position pos_;
}; // class Rectangle

#endif // PARSER_SRC_ITEMS_RECTANGLE_HPP
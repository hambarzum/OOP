#include "rectangle.hpp"

void Rectangle::setPosition(const Position& pos) {
    pos_ = pos;
}

Position Rectangle::getPosition() {
    return pos_;
}
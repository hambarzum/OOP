#ifndef COURSE_PROJECT_MODEL_ITEMS_ITEM_ATTRIBUTES_BOUNDING_BOX_HPP
#define COURSE_PROJECT_MODEL_ITEMS_ITEM_ATTRIBUTES_BOUNDING_BOX_HPP

namespace model {

struct Position {
    Position() = default;
    Position(double x, double y);
    double xCoord_ = 0.0;
    double yCoord_ = 0.0;
}; // struct Position

class BoundingBox {
public:
    BoundingBox(const Position& tl, const Position& br);
    BoundingBox(const Position& tl, double w, double h);
    double getWidth();
    double getHeight();

    Position getTopLeft() const {
        return topLeft_;
    }

    Position getBottomRight() const {
        return bottomRight_;
    }

private:
    Position topLeft_;
    Position bottomRight_;
}; // class BoundingBox

} // namespace model

#endif // COURSE_PROJECT_MODEL_ITEMS_ITEM_ATTRIBUTES_BOUNDING_BOX_HPP
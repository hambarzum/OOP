#ifndef COURSE_PROJECT_MODEL_ITEMS_ITEM_ATTRIBUTES_BOUNDING_BOX_HPP
#define COURSE_PROJECT_MODEL_ITEMS_ITEM_ATTRIBUTES_BOUNDING_BOX_HPP

namespace model {

/// TODO: remove Position, double coords
struct Position {
    Position() = default;
    Position(double x, double y);
    double xCoord_ = 0.0;
    double yCoord_ = 0.0;
}; // struct Position

class BoundingBox {
public:
    BoundingBox(double x1, double y1, double x2, double y2);
    double getWidth();
    double getHeight();
    /// TODO: coordinate getters if needed

private:
    double topLeftX_;
    double topLeftY_;
    double bottomRightX_;
    double bottomRightY_;
}; // class BoundingBox

} // namespace model

#endif // COURSE_PROJECT_MODEL_ITEMS_ITEM_ATTRIBUTES_BOUNDING_BOX_HPP
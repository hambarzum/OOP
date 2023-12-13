#ifndef COURSE_PROJECT_MODEL_ITEMS_ITEM_ATTRIBUTES_BOUNDING_BOX_HPP
#define COURSE_PROJECT_MODEL_ITEMS_ITEM_ATTRIBUTES_BOUNDING_BOX_HPP

namespace model {

class Geometry {
public:
    Geometry() = default;
    Geometry(double x1, double y1, double x2, double y2);
    double getWidth();
    double getHeight();
    /// TODO: coordinate getters if needed

private:
    double topLeftX_ = 0.0;
    double topLeftY_ = 0.0;
    double bottomRightX_ = 0.0;
    double bottomRightY_ = 0.0;
}; // class Geometry

} // namespace model

#endif // COURSE_PROJECT_MODEL_ITEMS_ITEM_ATTRIBUTES_BOUNDING_BOX_HPP
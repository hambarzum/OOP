#include <stdexcept> // std::out_of_range

#include "document.hpp"

namespace model {

void Document::addSlide(SlidePtr slide) {
    slides_.push_back(slide);
    ++slideCount_;
}

void Document::removeSlide(int id) {
    slides_.erase(std::next(slides_.begin(), id));
    --slideCount_;
}

void Document::moveSlide(int id, int pos) {
    /// TODO: what's the logic behind??
}

SlidePtr Document::getSlide(unsigned int id) const {
    if(id > slideCount_) {
        throw std::out_of_range("Slide out of range.");
    }
    return slides_[id];
}

} // namespace model
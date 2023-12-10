#include <stdexcept> // std::runtime_error

#include "document.hpp"

namespace model {

void Document::addSlide(SlidePtr slide) { // TK: support inserting also, take taret position, 
    slides_.push_back(slide);
    ++slideCount_;
}

void Document::removeSlide(int id) {
    slides_.erase(std::next(slides_.begin(), id));
    --slideCount_;
}

void Document::moveSlide(int id, int pos) { // TK: Remove
    /// TODO: what's the logic behind??
}

SlidePtr Document::getSlide(int id) const {
    if(id > slideCount_) { // TK: compare against slides_.size()
        throw std::runtime_error("No slide found with given id: [" + std::to_string(id) + "]\n");
    }

    return slides_[id];
}

} // namespace model
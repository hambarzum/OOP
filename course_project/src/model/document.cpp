#include <stdexcept> // std::runtime_error

#include "document.hpp"

namespace model {

void Document::addSlide(SlidePtr slide, int pos) {
    if(pos > static_cast<int>(slides_.size())) {
        throw std::runtime_error("Out of bounds slide insertion.\n");
    }

    // default pos case, no "-pos" option passed
    else if(pos == -1) {
        slides_.push_back(slide);
        return;
    }

    slides_.insert(slides_.begin() + pos, slide);
}

SlidePtr Document::getSlide(int idx) const {
    if(slides_.empty() || idx >= slides_.size()) {
        throw std::runtime_error("No slide found with index: [" + std::to_string(idx) + "]\n");
    }

    return slides_[idx];
}

int Document::size() const {
    return slides_.size();
}

Document::iterator Document::begin() {
    return slides_.begin();
}

Document::iterator Document::end() {
    return slides_.end();
}

Document::const_iterator Document::begin() const {
    return slides_.cbegin();
}

Document::const_iterator Document::end() const {
    return slides_.cend();
}

Document::const_iterator Document::cbegin() const {
    return slides_.cbegin();
}

Document::const_iterator Document::cend() const {
    return slides_.cend();
}

} // namespace model
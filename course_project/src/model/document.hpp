#ifndef COURSE_PROJECT_SRC_MODEL_DOCUMENT_HPP
#define COURSE_PROJECT_SRC_MODEL_DOCUMENT_HPP

#include <vector>

#include "slide.hpp"

namespace model {

class Document {
    using Slides = std::vector<SlidePtr>;
public:
    using iterator = Slides::iterator;
    using const_iterator = Slides::const_iterator;

public:
    void addSlide(SlidePtr slide = std::make_shared<Slide>());
    void removeSlide(int id);
    void moveSlide(int id, int pos);
    SlidePtr getSlide(int id) const;
    unsigned int size() { return slideCount_; }

public: // iterator generators
    iterator begin() { return slides_.begin(); }
    iterator end() { return slides_.end(); }

    const_iterator begin() const { return slides_.cbegin(); }
    const_iterator end() const { return slides_.cend(); }
    
    const_iterator cbegin() const { return slides_.cbegin(); }
    const_iterator cend() const { return slides_.cend(); }

private:    
    Slides slides_;
    int slideCount_ = 0;
    // Slide currentSlide_;
}; // class Document

} // namespace model

#endif // COURSE_PROJECT_SRC_MODEL_DOCUMENT_HPP
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
    void addSlide(SlidePtr slide, int pos = -1);
    /// TODO: SlidePtr removeSlide(int id);
    SlidePtr getSlide(int idx) const;
    int size() const;

public: // iterator generators
    iterator begin();
    iterator end();

    const_iterator begin() const;
    const_iterator end() const;
    
    const_iterator cbegin() const;
    const_iterator cend() const;

private:    
    Slides slides_;
    // Slide currentSlide_;
}; // class Document

} // namespace model

#endif // COURSE_PROJECT_SRC_MODEL_DOCUMENT_HPP
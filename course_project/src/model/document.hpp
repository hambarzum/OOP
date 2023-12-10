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
    // TK: Add slide should not have default argument, don't do like this, 
    // also addSlide should get position, by default it will append to the tail
    void addSlide(SlidePtr slide = std::make_shared<Slide>()); 
    // TK: Remove should return slide pointer, also for slides, instead of ids, simply use index
    void removeSlide(int id);
    // TK: Is this truly document method? moving slides is the responsibility of action, for the doc isn't it enough to provide add/remove?
    void moveSlide(int id, int pos); 
    SlidePtr getSlide(int id) const;
    unsigned int size() { return slideCount_; }

public: // iterator generators
    // TK: You are not writing template container, though those are single line functions but move them into cpp
    iterator begin() { return slides_.begin(); }
    iterator end() { return slides_.end(); }

    const_iterator begin() const { return slides_.cbegin(); }
    const_iterator end() const { return slides_.cend(); }
    
    const_iterator cbegin() const { return slides_.cbegin(); }
    const_iterator cend() const { return slides_.cend(); }

private:    
    Slides slides_;
    int slideCount_ = 0; // TK: you do not need this memeber, use slides_.size() instead
    // Slide currentSlide_;
}; // class Document

} // namespace model

#endif // COURSE_PROJECT_SRC_MODEL_DOCUMENT_HPP
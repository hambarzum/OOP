#ifndef COURSE_PROJECT_SRC_MODEL_SLIDE_HPP
#define COURSE_PROJECT_SRC_MODEL_SLIDE_HPP

#include <memory> // std::shared_ptr
#include <vector>

#include "items/item.hpp"
#include "items/item_base.hpp"
#include "items/item_group.hpp"

namespace model {

class Slide {
    using Items = std::vector<ItemBasePtr>;
public:
    using iterator = Items::iterator;
    using const_iterator = Items::const_iterator;

public:
    Slide();
    void addItem(ItemBasePtr item);
    void removeItem(int id);
    ItemBasePtr getItem(int id) const;
    int size() const { return itemCount_; }

public: // iterator generators
    iterator begin() { return items_.begin(); }
    iterator end() { return items_.end(); }

    const_iterator begin() const { return items_.cbegin(); }
    const_iterator end() const { return items_.cend(); }
    
    const_iterator cbegin() const { return items_.cbegin(); }
    const_iterator cend() const { return items_.cend(); }

private:
    int id_;
    ItemGroup topItem_;
    Items items_;
    int itemCount_ = 0;
}; // class Item

using SlidePtr = std::shared_ptr<Slide>;

} // naemspace model

#endif // COURSE_PROJECT_SRC_MODEL_SLIDE_HPP
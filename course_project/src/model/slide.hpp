#ifndef COURSE_PROJECT_SRC_MODEL_SLIDE_HPP
#define COURSE_PROJECT_SRC_MODEL_SLIDE_HPP

#include <memory> // std::shared_ptr
#include <vector>

#include "items/item.hpp"
#include "items/item.hpp"
#include "items/item_group.hpp"

namespace model {

class Slide {
public:
    using iterator = Items::iterator;
    using const_iterator = Items::const_iterator;
    using ItemId = int; // TK: Use ID type

public:
    Slide();
    void addItem(ItemPtr item); // TK: This function also should get parent ItemId, by default ParentId=0 which means TopItemId
    // TK: Also think about the how user should group several items together into single group item  
    void removeItem(ItemId id); // TK: Shouldn't removeItem return item ptr?
    ItemPtr getItem(ItemId id) const;
    ItemGroup getTopItem() const;
    int getID() const;
    int size() const { return itemCount_; }

public: // iterator generators
    // TK: Avoid using inline fuinctions even if they are single line,
    // Use inline functions for cases when you know that it is aimed to call too many times within loops
    // It will give you fast/optimal compiolation time
    iterator begin() { return items_.begin(); } // TK: you should return top item's iterator instead
    iterator end() { return items_.end(); }

    const_iterator begin() const { return items_.cbegin(); }
    const_iterator end() const { return items_.cend(); }
    
    const_iterator cbegin() const { return items_.cbegin(); }
    const_iterator cend() const { return items_.cend(); }

private:
    int id_; // TK: You can Eliminate slide Ids, and use topItem Id instead
    ItemGroup topItem_;
    Items items_; // TK: Slide items are in the topItem, when you have topItem, then should not keep such member, remove
    int itemCount_ = 0; // TK: What is this for?
}; // class Item

using SlidePtr = std::shared_ptr<Slide>;

} // naemspace model

#endif // COURSE_PROJECT_SRC_MODEL_SLIDE_HPP
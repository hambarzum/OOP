#include <iostream>

#include "add_item_action.hpp"

namespace logic {

AddItemAction::AddItemAction(model::ItemBasePtr item, model::SlidePtr slide) 
    : item_{item}
    , slide_{slide}
{

}

void AddItemAction::run() {
    slide_->addItem(item_);
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

} // namespace logic
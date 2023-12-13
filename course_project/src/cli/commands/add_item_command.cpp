#include <stdexcept> // std::runtime_error

#include "../../application.hpp"
#include "../../logic/actions/add_item_action.hpp"
#include "../../logic/actions/add_slide_action.hpp"
#include "../../model/items/item.hpp"
#include "../../model/items/item_group.hpp"
#include "../../model/items/item_attributes/geometry.hpp"
#include "../../rendering/shape_library.hpp"
#include "../../model/items/item_attributes/visual_attributes.hpp"
#include "../../model/slide.hpp"
#include "add_item_command.hpp"

#include <iostream>

namespace cli {

namespace cmd {

AddItem::AddItem() {
    options_["-type"] = std::string{};
    options_["-x1"] = 0.0;
    options_["-y1"] = 0.0;
    options_["-x2"] = 0.0;
    options_["-y2"] = 0.0;
    options_["-slide"] = 0;
    /// TODO: if no -slide, add item to document's current slide instead of slide 0
}

std::string AddItem::execute() {
    auto slide = Application::instance().getDocument().getSlide(options_["-slide"]);
    auto item = constructItem();
    auto action = std::make_shared<logic::actions::AddItem>(item, slide);

    /// @note log-check
    std::cout << "height: " << item->getGeometry().getHeight() << " width: " << item->getGeometry().getWidth() << std::endl; 
    
    auto director = Application::instance().getDirector();
    director.doAction(action);

    /// @note log-check
    std::cout << "Slide contents: ";
    for(auto& el : *slide) {
        std::cout << "item " << el->getID() << " ";
    }
    std::cout << "current slide size: " << slide->size() << std::endl;


    return static_cast<std::string>(options_["-type"]) + " added successfully.\n";
}

CommandPtr AddItem::clone() {
    return std::make_unique<AddItem>(*this);
}

model::ItemBasePtr AddItem::constructItem() {
    model::Geometry geom{options_["-x1"], options_["-y1"], options_["-x2"], options_["-y2"]};
    /// TODO: styleAttributes = ...
    model::ItemBasePtr item;

    if(static_cast<std::string>(options_["-type"]) == "Group") {
        item = std::make_shared<model::ItemGroup>();
    }
    else {
        item = std::make_shared<model::Item>(options_["-type"]);
    }

    item->setGeometry(geom);
    /// TODO: item->setStyleAttributes();

    return item;
}

} // namespace cmd

} // namespace cli
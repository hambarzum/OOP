#include <stdexcept> // std::runtime_error

#include "../../application.hpp"
#include "../../logic/actions/add_item_action.hpp"
#include "../../logic/actions/add_slide_action.hpp"
#include "../../model/items/item.hpp"
#include "../../model/items/item_group.hpp"
#include "../../model/items/item_attributes/bounding_box.hpp"
#include "../../model/items/item_attributes/visual_attributes.hpp"
#include "../../model/slide.hpp"
#include "add_command.hpp"

#include <iostream>

namespace cli {

AddCommand::AddCommand() {
    options_["-type"] = std::string{};
    options_["-x1"] = 0.0;
    options_["-y1"] = 0.0;
    options_["-x2"] = 0.0;
    options_["-y2"] = 0.0;
    options_["-slide"] = 0;
    /// TODO: add all options supported
}

std::string AddCommand::execute() {
    if(static_cast<std::string>(options_["-type"]) == "Slide") {
        auto slide = std::make_shared<model::Slide>();
        Application::instance().getDirector().doAction(std::make_shared<logic::actions::AddSlide>(slide));

        /// @note log-check
        std::cout << "document size: " << Application::instance().getDocument().size() << std::endl;
    }
    else {
        const auto item = constructItem();
        
        /// @note log-check
        std::cout << "height: " << item->getBoundingBox().getHeight() << " width: " << item->getBoundingBox().getWidth() << std::endl; 
        
        auto slide = Application::instance().getDocument().getSlide(options_["-slide"]);
        Application::instance().getDirector().doAction(std::make_shared<logic::actions::AddItem>(item, slide));
        
        /// @note log-check
        std::cout << "current slide size: " << slide->size() << std::endl;
    }

    return static_cast<std::string>(options_["-type"]) + " added successfully.\n";
}

CommandPtr AddCommand::clone() {
    return std::make_unique<AddCommand>(*this);
}

model::ItemBasePtr AddCommand::constructItem() {
    model::ItemBasePtr item;

    if(static_cast<std::string>(options_["-type"]) == "Group") {
        item = std::make_shared<model::ItemGroup>();
    }
    else {
        item = std::make_shared<model::Item>(options_["-type"]);
    }

    model::attributes::BoundingBox box{options_["-x1"], options_["-y1"], options_["-x2"], options_["-y2"]};
    item->setBoundingBox(box);
    /// TODO: item->setVisualAttributes();

    return item;
}

} // namespace cli
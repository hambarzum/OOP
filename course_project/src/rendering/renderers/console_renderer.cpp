#include <iostream> // std::cout, std::endl
#include <stdexcept> // std::runtime_error

#include "../../application.hpp"
#include "../../model/items/item.hpp"
#include "../textual_displayable.hpp"
#include "console_renderer.hpp"

namespace rendering {

void ConsoleRenderer::render(model::SlidePtr slide) {
    auto topItem = slide->getTopItem();
    render(std::make_shared<model::ItemGroup>(topItem));
}

void ConsoleRenderer::render(model::ItemBasePtr item) {
    item->accept(std::make_shared<ConsoleRenderer>(*this));
}

void ConsoleRenderer::visitItem(model::Item& item) {
    auto& shapeLib = Application::instance().getShapeLibrary();
    
    auto shape = shapeLib.getShape(std::make_shared<model::Item>(item));
    auto displayable = dynamic_cast<ITextualDisplayable*>(shape.get());
    
    if(displayable) {
        displayable->print();
    } else {
        throw std::runtime_error("Couldn't display item");
    }
}

void ConsoleRenderer::visitGroup(model::ItemGroup& group) {
    for(auto item : group) {
        item->accept(std::make_shared<ConsoleRenderer>(*this));
    }
}

} // namespace rendering
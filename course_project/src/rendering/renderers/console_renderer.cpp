#include <iostream> // std::cout, std::endl

#include "../../model/items/item_group.hpp"
#include "console_renderer.hpp"

namespace rendering {

IRendererPtr ConsoleRenderer::clone() {
    return std::make_unique<ConsoleRenderer>(*this);
}

void ConsoleRenderer::renderRect(model::ItemPtr item) {
    std::cout << "[ID: " << item->getID() << "] " << "Rect: " << "width - " << item->getBoundingBox().getWidth() << ", height - "
    << item->getBoundingBox().getHeight() << std::endl;
} 

void ConsoleRenderer::renderElipse(model::ItemPtr item) {
    /// TODO: implement
} 

void ConsoleRenderer::renderGroup(model::ItemPtr item) {
    /* for(auto el : *item) {
        /// TODO: figure out how to find out each element's type and call corresponding function
        std::cout << item->getID() << " " << "Rect: " << "width - " << item->getBoundingBox().getWidth() << " height - "
        << item->getBoundingBox().getHeight() << std::endl;
    } */
    std::cout << "[ID: " << std::to_string(item->getID()) << "] Group rendered" << std::endl;
}

} // namespace rendering
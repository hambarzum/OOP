#include <stdexcept> // std::runtime_error

#include "console_renderer.hpp"
#include "renderer_library.hpp"

namespace rendering {

RendererLibrary::RendererLibrary() {
    library_["console"] = std::make_unique<ConsoleRenderer>();
    /// TODO: add QImageRenderer and TextFileRenderer
}

IRendererPtr RendererLibrary::findRenderer(const std::string& rendererName) {
    const auto iter = library_.find(rendererName);

    if(iter == library_.end()) {
        throw std::runtime_error("Uknown command: [" + rendererName + "]\n");
    }

    return iter->second->clone();
}

} // namespace rendering
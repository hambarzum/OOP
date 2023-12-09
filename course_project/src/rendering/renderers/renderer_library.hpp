#ifndef RENDERING_RENDERING_FORMAT_RENDERER_LIBRARY_HPP
#define RENDERING_RENDERING_FORMAT_RENDERER_LIBRARY_HPP

#include <string>

#include "renderer.hpp"

namespace rendering {

class RendererLibrary {
public:
    RendererLibrary();
    IRendererPtr findRenderer(const std::string&);

private:
    std::unordered_map<std::string, IRendererPtr> library_;
}; // class RendererLibrary

} // namespace rendering

#endif // RENDERING_RENDERING_FORMAT_RENDERER_LIBRARY_HPP
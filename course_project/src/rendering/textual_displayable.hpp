#ifndef RENDERING_TEXTUAL_DISPLAYABLE
#define RENDERING_TEXTUAL_DISPLAYABLE

#include <memory> // std::shared_ptr

namespace rendering {

class ITextualDisplayable {
public:
    virtual void print() = 0;

    virtual ~ITextualDisplayable() = default;
}; // class ITextualDisplayable

using ITextualDisplayablePtr = std::unique_ptr<ITextualDisplayable>;

} // namespace rendering

#endif // RENDERING_TEXTUAL_DISPLAYABLE
#include <variant>

#include "draw.hh"
#include "draw_all_shapes.hh"


namespace Guideline17 {
void draw_all_shapes(const Shapes& shapes) {
  for (const auto& shape : shapes) {
    std::visit(Draw{}, shape);
  }
}
};  // namespace Guideline17

#include <iostream>
#include <memory>
#include <vector>

#include "draw.hh"
#include "shape.hh"


namespace Guideline17 {
void draw_all_shapes(const std::vector<std::unique_ptr<Shape>>& shapes) {
  for (const auto& shape: shapes) {
    shape->accept(Draw{});
  }
}
};  // namespace Guideline17

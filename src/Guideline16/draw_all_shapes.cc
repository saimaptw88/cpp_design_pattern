#include <iostream>
#include <memory>
#include <vector>

#include "circle.hh"
#include "draw.hh"
#include "draw_all_shapes.hh"
#include "draw_circle.hh"
#include "draw_square.hh"
#include "square.hh"


namespace Guideline16 {
void draw_all_shapes(const std::vector<std::unique_ptr<Shape>>& shapes) {
  for (const auto& shape: shapes) {
    shape->accept(Draw{});
  }
}
};  // namespace Guideline16

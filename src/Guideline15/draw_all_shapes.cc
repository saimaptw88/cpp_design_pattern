#include <iostream>

#include "circle.hh"
#include "draw_all_shapes.hh"
#include "draw_circle.hh"
#include "draw_square.hh"
#include "square.hh"


namespace Guideline15 {
void draw_all_shapes(const std::vector<std::unique_ptr<Shape>>& shapes) {
  for (const auto& shape: shapes) {
    shape->draw();
  }
}
};  // namespace Guideline15

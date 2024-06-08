#include <iostream>

#include "circle.hh"
#include "draw_all_shapes.hh"
#include "draw_circle.hh"
#include "draw_square.hh"
#include "square.hh"


namespace Guideline15 {
void draw_all_shapes(const std::vector<std::unique_ptr<Shape>>& shapes) {
  for (const auto& shape: shapes) {
    switch (shape->getType()) {
    case circle:
      draw(static_cast<const Circle&>(*shape));
      break;

    case square:
      draw(static_cast<const Square&>(*shape));
      break;
    }
  }
}
};  // namespace Guideline15

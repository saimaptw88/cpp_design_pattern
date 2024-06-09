#include <iostream>
#include <memory>
#include <vector>

#include "circle.hh"
#include "draw_all_shapes.hh"
#include "execute.hh"
#include "square.hh"
#include "variant.hh"


namespace Guideline17 {
void execute() {
  std::cout << "Guideline17" << std::endl;

  variant_sample();

  using Shapes = std::vector<std::unique_ptr<Shape>>;

  Shapes shapes;

  shapes.emplace_back(std::make_unique<Circle>(2.3));
  shapes.emplace_back(std::make_unique<Square>(1.2));
  shapes.emplace_back(std::make_unique<Circle>(4.1));

  draw_all_shapes(shapes);
}
};  // namespace Guideline17

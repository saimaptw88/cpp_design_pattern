#include <iostream>
#include <variant>

#include "draw_all_shapes.hh"
#include "execute.hh"
#include "shapes.hh"
#include "variant.hh"


namespace Guideline17 {
void execute() {
  std::cout << "Guideline17" << std::endl;

  variant_sample();

  Shapes shapes;

  shapes.emplace_back(Circle(2.3));
  shapes.emplace_back(Square(1.2));
  shapes.emplace_back(Circle(4.1));

  draw_all_shapes(shapes);
}
};  // namespace Guideline17

#include <iostream>

#include "execute.hh"
#include "square.hh"
#include "rectangle.hh"


namespace Guideline6 {
void execute() {
  std::cout << "Guideline6" << std::endl;

  auto rectangle = Square();
  rectangle.setHeight(6);

  transform(rectangle);
}
};  // namespace Guideline6

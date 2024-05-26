#include <iostream>

#include "square.hh"


namespace Guideline6 {
void Square::setWidth(int x) {
  width = x;
  height = x;
}

void Square::setHeight(int y) {
  width = y;
  height = y;
}

int Square::getArea() const {
  return width * height;
}

void transform(Rectangle& rectangle) {
  rectangle.setWidth(7);
  rectangle.setHeight(4);

  const auto area = rectangle.getArea();
  std::cout << area << std::endl;
}
};  // namespace Guideline6

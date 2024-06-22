// Copyright saito 2024
#include <iostream>
#include <memory>
#include <utility>
#include <vector>

#include "../../src/Guideline19/circle.hh"
#include "../../src/Guideline19/open_gl_circle_strategy.hh"
#include "../../src/Guideline19/open_gl_square_strategy.hh"
#include "../../src/Guideline19/square.hh"


namespace Guideline19 {
void execute() {
  std::cout << "Guideline19" << std::endl;

  using Shapes = std::vector<std::unique_ptr<Shape>>;

  Shapes shapes;

  shapes.emplace_back(
    std::make_unique<Circle>(
      2.3, std::make_unique<OpenGlCircleStrategy>()));

  shapes.emplace_back(
    std::make_unique<Square>(
      1.2, std::make_unique<OpenGlSquareStrategy>()));

  shapes.emplace_back(
    std::make_unique<Circle>(
      4.1, std::make_unique<OpenGlCircleStrategy>()));

  for (auto&& shape : shapes) {
    shape->draw();
  }
}
};  // namespace Guideline19

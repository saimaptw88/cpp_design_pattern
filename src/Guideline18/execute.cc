// Copyright saito 2024
#include <iostream>
#include <memory>
#include <vector>

#include "../../src/Guideline18/abstract_visitor.hh"
#include "../../src/Guideline18/circle.hh"
#include "../../src/Guideline18/draw.hh"
#include "../../src/Guideline18/execute.hh"
#include "../../src/Guideline18/square.hh"


namespace Guideline18 {
void execute() {
  std::cout << "Guideline18" << std::endl;

  std::vector<std::unique_ptr<Shape>> shapes;

  shapes.emplace_back(std::make_unique<Circle>(3.0));
  shapes.emplace_back(std::make_unique<Square>(1.0));
  shapes.emplace_back(std::make_unique<Circle>(2.0));

  AbstractVisitor* draw = new Draw();

  for (auto&& shape : shapes) {
    shape->accept(*draw);
  }
}
};  // namespace Guideline18

// Copyright saito 2024
#include <iostream>
#include <memory>

#include "../../src/Guideline21/add.hh"
#include "../../src/Guideline21/calculator.hh"
#include "../../src/Guideline21/execute.hh"
#include "../../src/Guideline21/subtract.hh"


namespace Guideline21 {
void execute() {
  std::cout << "Guideline21" << std::endl;

  auto calculator = Calculator{};

  auto op1 = std::make_unique<Add>(3);
  auto op2 = std::make_unique<Add>(7);
  auto op3 = std::make_unique<Subtract>(4);
  auto op4 = std::make_unique<Subtract>(2);

  calculator.compute(std::move(op1));
  calculator.compute(std::move(op2));
  calculator.compute(std::move(op3));
  calculator.compute(std::move(op4));

  calculator.undoLast();

  const int res = calculator.result();
  std::cout << "result: " << res << std::endl;
}
};  // namespace Guideline21

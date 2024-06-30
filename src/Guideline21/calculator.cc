// Copyright saito 2024
#include "../../src/Guideline21/calculator.hh"


namespace Guideline21 {
void Calculator::compute(std::unique_ptr<CalculateCommand> command) {
  current_ = command->execute(current_);
  stack_.push(std::move(command));
}

void Calculator::undoLast() {
  if (stack_.empty()) return;

  auto command = std::move(stack_.top());
  stack_.pop();

  current_ = command->undo(current_);
}

int Calculator::result() const {
  return current_;
}

void Calculator::clear() {
  current_ = 0;
  CommandStack{}.swap(stack_);
}
};  // namespace Guideline21

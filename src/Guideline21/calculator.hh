// Copyright saito 2024
#ifndef SRC_GUIDELINE21_CALCULATOR_HH_
#define SRC_GUIDELINE21_CALCULATOR_HH_


#include <memory>
#include <stack>

#include "../../src/Guideline21/calculate_command.hh"

namespace Guideline21 {
class Calculator {
  public:
    void compute(std::unique_ptr<CalculateCommand> command);
    void undoLast();

    int result() const;
    void clear();

  private:
    using CommandStack = std::stack<std::unique_ptr<CalculateCommand>>;

    CommandStack stack_;
    int current_{};
};
};  // namespace Guideline21
#endif  // SRC_GUIDELINE21_CALCULATOR_HH_

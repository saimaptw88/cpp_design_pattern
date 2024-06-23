// Copyright saito 2024
#ifndef SRC_GUIDELINE21_SUBTRACT_HH_
#define SRC_GUIDELINE21_SUBTRACT_HH_


#include "../../src/Guideline21/calculate_command.hh"

namespace Guideline21 {
class Subtract : public CalculateCommand {
  public:
    explicit Subtract(int operand) : operand_(operand) {}

    int execute(int i) const override {
      return i - operand_;
    }

    int undo(int i) const override {
      return i + operand_;
    }

  private:
    int operand_{};
};
};  // namespace Guideline21
#endif  // SRC_GUIDELINE21_SUBTRACT_HH_

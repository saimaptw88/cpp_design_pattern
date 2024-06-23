// Copyright saito 2024
#ifndef SRC_GUIDELINE21_ADD_HH_
#define SRC_GUIDELINE21_ADD_HH_


#include "../../src/Guideline21/calculate_command.hh"

namespace Guideline21 {
class Add : public CalculateCommand {
  public:
    explicit Add(int operand) : operand_(operand) {}

    int execute(int i) const override {
      return i + operand_;
    }

    int undo(int i) const override {
      return i - operand_;
    }

  private:
    int operand_{};
};
};  // namespace Guideline21
#endif  // SRC_GUIDELINE21_ADD_HH_

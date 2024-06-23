// Copyright saito 2024
#ifndef SRC_GUIDELINE21_CALCULATE_COMMAND_HH_
#define SRC_GUIDELINE21_CALCULATE_COMMAND_HH_


namespace Guideline21 {
class CalculateCommand {
  public:
    virtual ~CalculateCommand() = default;

    virtual int execute(int i) const = 0;
    virtual int undo(int i) const = 0;
};
};  // namespace Guideline21
#endif  // SRC_GUIDELINE21_CALCULATE_COMMAND_HH_

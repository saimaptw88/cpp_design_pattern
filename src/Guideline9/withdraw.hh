#ifndef SRC_GUIDELINE9_WITHDRAW_HH_
#define SRC_GUIDELINE9_WITHDRAW_HH_


#include "transaction.hh"


namespace Guideline9 {
class Withdraw : public Transaction {
  public:
    ~Withdraw() = default;
    void execute() override;
};
};  // namespace Guideline9
#endif  // SRC_GUIDELINE9_WITHDRAW_HH_

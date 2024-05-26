#ifndef SRC_GUIDELINE9_DEPOSIT_HH_
#define SRC_GUIDELINE9_DEPOSIT_HH_


#include "transaction.hh"


namespace Guideline9 {
class Deposit : public Transaction {
  public:
    ~Deposit() = default;
    void execute() override;
};
};  // namespace Guideline9
#endif  // SRC_GUIDELINE9_DEPOSIT_HH_

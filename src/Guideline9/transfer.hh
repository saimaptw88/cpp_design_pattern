#ifndef SRC_GUIDELINE9_TRANSFER_HH_
#define SRC_GUIDELINE9_TRANSFER_HH_


#include "transaction.hh"


namespace Guideline9 {
class Transfer : public Transaction {
  public:
   ~Transfer() = default;
   void execute() override;
};
};  // namespace Guideline9
#endif  // SRC_GUIDELINE9_TRANSFER_HH_

#ifndef SRC_GUIDELINE9_TRANSACTION_HH_
#define SRC_GUIDELINE9_TRANSACTION_HH_


namespace Guideline9 {
class Transaction {
  public:
    virtual ~Transaction() = default;
    virtual void execute() = 0;
};
};  // namespace Guideline9
#endif  // SRC_GUIDELINE9_TRANSACTION_HH_

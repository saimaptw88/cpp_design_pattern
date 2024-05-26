#ifndef SRC_GUIDELINE9_WITHDRAW_UI_HH_
#define SRC_GUIDELINE9_WITHDRAW_UI_HH_


namespace Guideline9 {
class WithdrawUI {
  public:
    virtual ~WithdrawUI() = default;
    virtual void requestWithdrawalAmount() = 0;
    virtual void informInsufficientFunds() = 0;
};
};  // namespace Guideline9
#endif  // SRC_GUIDELINE9_WITHDRAW_UI_HH_

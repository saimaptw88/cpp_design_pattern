#ifndef SRC_GUIDELINE9_UI_HH_
#define SRC_GUIDELINE9_UI_HH_


#include "deposit_ui.hh"
#include "transfer_ui.hh"
#include "withdraw_ui.hh"


namespace Guideline9 {
class UI : public DepositUI, public TransferUI, public WithdrawUI {
  public:
    UI() = default;
    void requestDepositAmount() override;
    void requestTransferAmount() override;
    void requestWithdrawalAmount() override;
    void informInsufficientFunds() override;
};
};  // namespace Guideline9
#endif  // SRC_GUIDELINE9_UI_HH_

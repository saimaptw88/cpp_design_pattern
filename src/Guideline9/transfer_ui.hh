#ifndef SRC_GUIDELINE9_TRANSFER_UI_HH_
#define SRC_GUIDELINE9_TRANSFER_UI_HH_


namespace Guideline9 {
class TransferUI {
  public:
    virtual ~TransferUI() = default;
    virtual void requestTransferAmount() = 0;
    virtual void informInsufficientFunds() = 0;
};
};  // namespace Guideline9
#endif  // SRC_GUIDELINE9_TRANSFER_UI_HH_

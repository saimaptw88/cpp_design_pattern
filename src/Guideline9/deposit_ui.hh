#ifndef SRC_GUIDELINE9_DEPOSIT_UI_HH_
#define SRC_GUIDELINE9_DEPOSIT_UI_HH_


namespace Guideline9 {
class DepositUI {
  public:
    virtual ~DepositUI() = default;
    virtual void requestDepositAmount() = 0;
};
};  // namespace Guideline9
#endif  // SRC_GUIDELINE9_DEPOSIT_UI_HH_

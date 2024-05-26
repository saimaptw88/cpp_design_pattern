#include <iostream>

#include "execute.hh"
#include "ui.hh"


namespace Guideline9 {
void execute() {
  std::cout << "Guideline9" << std::endl;

  auto ui = UI();

  ui.informInsufficientFunds();
  ui.requestWithdrawalAmount();
}
};  // namespace Guideline9

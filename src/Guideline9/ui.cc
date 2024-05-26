#include <iostream>

#include "ui.hh"


namespace Guideline9 {
void UI::requestDepositAmount() {
  std::cout << "Request deposit." << std::endl;
}

void UI::requestTransferAmount() {
  std::cout << "Request transfer." << std::endl;
}

void UI::requestWithdrawalAmount() {
  std::cout << "Request withdraw." << std::endl;
}

void UI::informInsufficientFunds() {
  std::cout << "Inform insufficient funds." << std::endl;
}
};  // namespace Guideline9

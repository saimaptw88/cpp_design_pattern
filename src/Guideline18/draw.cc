// Copyright saito 2023
#include <iostream>

#include "../../src/Guideline18/draw.hh"


namespace Guideline18 {
void Draw::visit(const Circle& c) const {
  std::cout << "Draw circle: " << c.radius() << std::endl;
}

void Draw::visit(const Square& s) const {
  std::cout << "Draw square: " << s.side() << std::endl;
}
};  // namespace Guideline18

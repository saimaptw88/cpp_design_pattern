#ifndef SRC_GUIDELINE17_DRAW_HH_
#define SRC_GUIDELINE17_DRAW_HH_


#include <iostream>

#include "shape.hh"


namespace Guideline17 {
struct Draw {
  void operator()(const Circle&) const {
    std::cout << "Draw circle." << std::endl;
  }

  void operator()(const Square&) const {
    std::cout << "Draw square." << std::endl;
  }
};
};  // namespace Guideline17
#endif  // SRC_GUIDELINE17_DRAW_HH_

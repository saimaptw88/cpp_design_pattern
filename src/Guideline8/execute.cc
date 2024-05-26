#include <iostream>

#include "execute.hh"
#include "range.hh"


namespace Guideline8 {
void execute() {
  std::cout << "Guideline8" << std::endl;

  int array[6] = {1, 2, 3, 4, 5, 6};

  traverseRange(array);
}
};  // namespace Guideline8

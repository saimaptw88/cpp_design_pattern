#include <utility>

#include "widget.hh"


namespace Guideline8 {
void swap(Widget& w1, Widget& w2) {
  std::swap(w1.i, w2.i);
}
};  // namespace Guideline8

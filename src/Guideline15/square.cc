#include "draw_square.hh"
#include "square.hh"


namespace Guideline15 {
void Square::draw() const {
  Guideline15::draw(static_cast<const Square&>(*this));
}
};  // namespace Guideline15

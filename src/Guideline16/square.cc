#include "draw_square.hh"
#include "square.hh"


namespace Guideline16 {
void Square::accept(const ShapeVisitor& v) {
  v.visit(*this);
}
};  // namespace Guideline16

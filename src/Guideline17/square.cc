#include "square.hh"


namespace Guideline17 {
void Square::accept(const ShapeVisitor& v) {
  v.visit(*this);
}
};  // namespace Guideline17

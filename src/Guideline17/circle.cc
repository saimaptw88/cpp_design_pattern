#include "circle.hh"


namespace Guideline17 {
void Circle::accept(const ShapeVisitor& v) {
  v.visit(*this);
}
};  // namespace Guideline17

#include "circle.hh"
#include "draw_circle.hh"


namespace Guideline16 {
void Circle::accept(const ShapeVisitor& v) {
  v.visit(*this);
}
};  // namespace Guideline16

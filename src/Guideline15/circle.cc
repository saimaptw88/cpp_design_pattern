#include "circle.hh"
#include "draw_circle.hh"


namespace Guideline15 {
void Circle::draw() const {
  Guideline15::draw(static_cast<const Circle&>(*this));
}
};  // namespace Guideline15

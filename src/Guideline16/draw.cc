#include "draw.hh"
#include "draw_circle.hh"
#include "draw_square.hh"


namespace Guideline16 {
void Draw::visit(const Circle& c) const {
  draw(c);
}

void Draw::visit(const Square& s) const {
  draw(s);
}
};  // namespace Guideline16

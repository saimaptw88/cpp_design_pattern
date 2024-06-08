#ifndef SRC_GUIDELINE16_DRAW_HH_
#define SRC_GUIDELINE16_DRAW_HH_


#include "shape_visitor.hh"


namespace Guideline16 {
class Draw : public ShapeVisitor {
  public:
    ~Draw() = default;

    void visit(const Circle&) const override;
    void visit(const Square&) const override;
};
};  // namespace Guideline16
#endif  // SRC_GUIDELINE16_DRAW_HH_

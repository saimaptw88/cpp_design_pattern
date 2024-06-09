#ifndef SRC_GUIDELINE17_DRAW_HH_
#define SRC_GUIDELINE17_DRAW_HH_


#include "shape_visitor.hh"


namespace Guideline17 {
class Draw : public ShapeVisitor {
  public:
    ~Draw() = default;

    void visit(const Circle&) const override;
    void visit(const Square&) const override;
};
};  // namespace Guideline17
#endif  // SRC_GUIDELINE17_DRAW_HH_

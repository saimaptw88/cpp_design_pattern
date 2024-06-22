// Copyright saito 2024
#ifndef SRC_GUIDELINE18_DRAW_HH_
#define SRC_GUIDELINE18_DRAW_HH_


#include "../../src/Guideline18/abstract_visitor.hh"
#include "../../src/Guideline18/circle.hh"
#include "../../src/Guideline18/square.hh"
#include "../../src/Guideline18/visitor.hh"

namespace Guideline18 {
class Draw : public AbstractVisitor
           , public Visitor<Circle>
           , public Visitor<Square> {
  public:
    void visit(const Circle&) const override;
    void visit(const Square&) const override;
};
};  // namespace Guideline18
#endif  // SRC_GUIDELINE18_DRAW_HH_

#ifndef SRC_GUIDELINE17_SHAPE_VISITOR_HH_
#define SRC_GUIDELINE17_SHAPE_VISITOR_HH_


namespace Guideline17 {
class Circle;
class Square;

class ShapeVisitor {
  public:
    virtual ~ShapeVisitor() = default;

    virtual void visit(const Circle&) const = 0;
    virtual void visit(const Square&) const = 0;
};
};  // namespace Guideline17
#endif  // SRC_GUIDELINE17_SHAPE_VISITOR_HH_

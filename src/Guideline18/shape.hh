#ifndef SRC_GUIDELINE18_SHAPE_HH_
#define SRC_GUIDELINE18_SHAPE_HH_


#include "../../src/Guideline18/abstract_visitor.hh"

namespace Guideline18 {
enum ShapeType {
  circle,
  square
};

class Shape {
  protected:
    explicit Shape(ShapeType type) : type_(type) {}

  public:
    virtual ~Shape() = default;

    ShapeType getType() const { return type_; }

    virtual void accept(const AbstractVisitor&) = 0;

  private:
    ShapeType type_;
};
};  // namespace Guideline18
#endif  // SRC_GUIDELINE18_SHAPE_HH_

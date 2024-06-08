#ifndef SRC_GUIDELINE16_CIRCLE_HH_
#define SRC_GUIDELINE16_CIRCLE_HH_


#include <iostream>

#include "draw_circle.hh"
#include "point.hh"
#include "shape.hh"
#include "shape_visitor.hh"


namespace Guideline16 {
class Circle : public Shape {
  public:
    explicit Circle(double radius)
      : Shape(circle), radius_(radius) {}

    double radius() const { return radius_; }
    Point center() const { return center_; }

    void accept(const ShapeVisitor& v) override;

  private:
    double radius_;
    Point center_{};
};
};  // namespace Guideline16
#endif  // SRC_GUIDELINE16_CIRCLE_HH_

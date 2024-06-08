#ifndef SRC_GUIDELINE15_CIRCLE_HH_
#define SRC_GUIDELINE15_CIRCLE_HH_


#include "point.hh"
#include "shape.hh"


namespace Guideline15 {
class Circle : public Shape {
  public:
    explicit Circle(double radius)
      : Shape(circle), radius_(radius) {}

    double radius() const { return radius_; }
    Point center() const { return center_; }

  private:
    double radius_;
    Point center_{};
};
};  // namespace Guideline15
#endif  // SRC_GUIDELINE15_CIRCLE_HH_

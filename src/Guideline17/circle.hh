#ifndef SRC_GUIDELINE17_CIRCLE_HH_
#define SRC_GUIDELINE17_CIRCLE_HH_


#include <iostream>

#include "point.hh"


namespace Guideline17 {
class Circle {
  public:
    explicit Circle(double radius)
      : radius_(radius) {}

    double radius() const { return radius_; }
    Point center() const { return center_; }

  private:
    double radius_;
    Point center_{};
};
};  // namespace Guideline17
#endif  // SRC_GUIDELINE17_CIRCLE_HH_

#ifndef SRC_GUIDELINE15_SQUARE_HH_
#define SRC_GUIDELINE15_SQUARE_HH_


#include "draw_square.hh"
#include "point.hh"
#include "shape.hh"


namespace Guideline15 {
class Square : public Shape {
  public:
    explicit Square(double side)
      : Shape(square), side_(side) {}

    double side() const { return side_; }
    Point center() const { return center_; }

    void draw() const override;

  private:
    double side_;
    Point center_{};
};
};  // namespace Guideline15
#endif  // SRC_GUIDELINE15_SQUARE_HH_

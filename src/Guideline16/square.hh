#ifndef SRC_GUIDELINE16_SQUARE_HH_
#define SRC_GUIDELINE16_SQUARE_HH_


#include "draw_square.hh"
#include "point.hh"
#include "shape.hh"
#include "shape_visitor.hh"


namespace Guideline16 {
class Square : public Shape {
  public:
    explicit Square(double side)
      : Shape(square), side_(side) {}

    double side() const { return side_; }
    Point center() const { return center_; }

    void accept(const ShapeVisitor&) override;

  private:
    double side_;
    Point center_{};
};
};  // namespace Guideline16
#endif  // SRC_GUIDELINE16_SQUARE_HH_

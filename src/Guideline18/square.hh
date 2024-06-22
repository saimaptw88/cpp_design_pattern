#ifndef SRC_GUIDELINE18_SQUARE_HH_
#define SRC_GUIDELINE18_SQUARE_HH_


#include "../../src/Guideline18/point.hh"
#include "../../src/Guideline18/shape.hh"


namespace Guideline18 {
class Square : public Shape {
  public:
    explicit Square(double side)
      : Shape(square), side_(side) {}

    double side() const { return side_; }
    Point center() const { return center_; }

    void accept(const AbstractVisitor& v) override {
      const auto* sv = dynamic_cast<const Visitor<Square>*>(&v);

      if (sv) {
        sv->visit(*this);
      }
    }

  private:
    double side_;
    Point center_{};
};
};  // namespace Guideline18
#endif  // SRC_GUIDELINE18_SQUARE_HH_

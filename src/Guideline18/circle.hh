#ifndef SRC_GUIDELINE18_CIRCLE_HH_
#define SRC_GUIDELINE18_CIRCLE_HH_


#include "../../src/Guideline18/point.hh"
#include "../../src/Guideline18/shape.hh"
#include "../../src/Guideline18/visitor.hh"


namespace Guideline18 {
class Circle : public Shape {
  public:
    explicit Circle(double radius)
      : Shape(circle), radius_(radius) {}

    double radius() const { return radius_; }
    Point center() const { return center_; }

    void accept(const AbstractVisitor& v) override {
      const auto* cv = dynamic_cast<Visitor<Circle> const*>(&v);

      if (cv) {
        cv->visit(*this);
      }
    }

  private:
    double radius_;
    Point center_{};
};
};  // namespace Guideline18
#endif  // SRC_GUIDELINE18_CIRCLE_HH_

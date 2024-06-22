// Copyright saito 2024
#ifndef SRC_GUIDELINE19_CIRCLE_HH_
#define SRC_GUIDELINE19_CIRCLE_HH_


#include <memory>
#include <utility>

#include "../../src/Guideline19/draw_strategy.hh"
#include "../../src/Guideline19/point.hh"
#include "../../src/Guideline19/shape.hh"

namespace Guideline19 {
class Circle : public Shape {
  public:
    explicit Circle(double redius, std::unique_ptr<DrawStrategy<Circle>> drawer)
      : redius_(redius)
      , drawer_(std::move(drawer)) {}

    double redius() const { return redius_; }
    Point center() const { return center_; }

    void draw() const override {
      drawer_->draw(*this);
    }

  private:
    double redius_;
    Point center_{};
    std::unique_ptr<DrawStrategy<Circle>> drawer_;
};
};  // namespace Guideline19
#endif  // SRC_GUIDELINE19_CIRCLE_HH_

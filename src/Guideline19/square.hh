// Copyright saito 2024
#ifndef SRC_GUIDELINE19_SQUARE_HH_
#define SRC_GUIDELINE19_SQUARE_HH_


#include <memory>
#include <utility>

#include "../../src/Guideline19/draw_strategy.hh"
#include "../../src/Guideline19/point.hh"
#include "../../src/Guideline19/shape.hh"

namespace Guideline19 {
class Square : public Shape {
  public:
    explicit Square(double side, std::unique_ptr<DrawStrategy<Square>> drawer)
      : side_(side)
      , drawer_(std::move(drawer)) {}

    double side() const { return side_; }
    Point center() const { return center_; }

    void draw() const override {
      drawer_->draw(*this);
    }

  private:
    double side_;
    Point center_{};
    std::unique_ptr<DrawStrategy<Square>> drawer_;
};
};  // namespace Guideline19
#endif  // SRC_GUIDELINE19_SQUARE_HH_

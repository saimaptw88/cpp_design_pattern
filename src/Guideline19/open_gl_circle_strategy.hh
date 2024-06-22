// Copyright saito 2024
#ifndef SRC_GUIDELINE19_OPEN_GL_CIRCLE_STRATEGY_HH_
#define SRC_GUIDELINE19_OPEN_GL_CIRCLE_STRATEGY_HH_


#include <iostream>

#include "../../src/Guideline19/circle.hh"
#include "../../src/Guideline19/draw_strategy.hh"

namespace Guideline19 {
class OpenGlCircleStrategy : public DrawStrategy<Circle> {
  public:
    explicit OpenGlCircleStrategy() = default;
    ~OpenGlCircleStrategy() = default;

    void draw(const Circle& c) const override {
      std::cout << "Draw circle: " << c.redius() << std::endl;
    }
};
};  // namespace Guideline19
#endif  // SRC_GUIDELINE19_OPEN_GL_CIRCLE_STRATEGY_HH_

// Copyright saito 2024
#ifndef SRC_GUIDELINE19_OPEN_GL_SQUARE_STRATEGY_HH_
#define SRC_GUIDELINE19_OPEN_GL_SQUARE_STRATEGY_HH_


#include <iostream>

#include "../../src/Guideline19/draw_strategy.hh"
#include "../../src/Guideline19/square.hh"

namespace Guideline19 {
class OpenGlSquareStrategy : public DrawStrategy<Square> {
  public:
    explicit OpenGlSquareStrategy() = default;
    ~OpenGlSquareStrategy() = default;

    void draw(const Square& s) const override {
      std::cout << "Draw square: " << s.side() << std::endl;
    }
};
};  // namespace Guideline19
#endif  // SRC_GUIDELINE19_OPEN_GL_SQUARE_STRATEGY_HH_

// Copyright saito 2024
#ifndef SRC_GUIDELINE19_DRAW_STRATEGY_HH_
#define SRC_GUIDELINE19_DRAW_STRATEGY_HH_


namespace Guideline19 {
template <typename T>
class DrawStrategy {
  public:
    virtual ~DrawStrategy() = default;
    virtual void draw(const T&) const = 0;
};
};  // namespace Guideline19
#endif  // SRC_GUIDELINE19_DRAW_STRATEGY_HH_

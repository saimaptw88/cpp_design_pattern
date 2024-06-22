// Copyrigh saito 2024
#ifndef SRC_GUIDELINE19_SHAPE_HH_
#define SRC_GUIDELINE19_SHAPE_HH_


namespace Guideline19 {
class Shape {
  public:
    virtual ~Shape() = default;
    virtual void draw() const = 0;
};
};  // namespace Guideline19
#endif  // SRC_GUIDELINE19_SHAPE_HH_

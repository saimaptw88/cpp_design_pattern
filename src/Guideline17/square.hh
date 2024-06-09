#ifndef SRC_GUIDELINE17_SQUARE_HH_
#define SRC_GUIDELINE17_SQUARE_HH_


#include "point.hh"


namespace Guideline17 {
class Square {
  public:
    explicit Square(double side)
      : side_(side) {}

    double side() const { return side_; }
    Point center() const { return center_; }

  private:
    double side_;
    Point center_{};
};
};  // namespace Guideline17
#endif  // SRC_GUIDELINE17_SQUARE_HH_

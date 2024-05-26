#ifndef SRC_GUIDELINE6_SQUARE_HH_
#define SRC_GUIDELINE6_SQUARE_HH_


#include "rectangle.hh"


namespace Guideline6 {
class Square : public Rectangle {
  public:
    ~Square() = default;

    void setWidth(int) override;
    void setHeight(int) override;

    int getArea() const override;
};

void transform(Rectangle&);
};  // namespace Guideline6
#endif  // SRC_GUIDELINE6_SQUARE_HH_

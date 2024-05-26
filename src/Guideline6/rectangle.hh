#ifndef SRC_GUIDELINE6_RECTANGLE_HH_
#define SRC_GUIDELINE6_RECTANGLE_HH_


namespace Guideline6 {
class Rectangle {
  public:
    virtual ~Rectangle() = default;

    int getWidth() const;
    int getHeight() const;

    virtual void setWidth(int) = 0;
    virtual void setHeight(int) = 0;

    virtual int getArea() const = 0;

  protected:
    int width;
    int height;
};
};  // namespace Guideline6
#endif  // SRC_GUIDELINE6_RECTANGLE_HH_

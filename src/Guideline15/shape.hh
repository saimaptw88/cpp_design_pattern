#ifndef SRC_GUIDELINE15_SHAPE_HH_
#define SRC_GUIDELINE15_SHAPE_HH_


namespace Guideline15 {
enum ShapeType {
  circle,
  square
};

class Shape {
  protected:
    explicit Shape(ShapeType type) : type_(type) {}

  public:
    virtual ~Shape() = default;

    ShapeType getType() const { return type_; }

  private:
    ShapeType type_;
};
};  // namespace Guideline15
#endif  // SRC_GUIDELINE15_SHAPE_HH_

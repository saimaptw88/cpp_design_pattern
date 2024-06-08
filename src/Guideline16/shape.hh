#ifndef SRC_GUIDELINE16_SHAPE_HH_
#define SRC_GUIDELINE16_SHAPE_HH_


namespace Guideline16 {
enum ShapeType {
  circle,
  square
};

class ShapeVisitor;

class Shape {
  protected:
    explicit Shape(ShapeType type) : type_(type) {}

  public:
    virtual ~Shape() = default;

    ShapeType getType() const { return type_; }

    virtual void accept(const ShapeVisitor&) = 0;

  private:
    ShapeType type_;
};
};  // namespace Guideline16
#endif  // SRC_GUIDELINE16_SHAPE_HH_

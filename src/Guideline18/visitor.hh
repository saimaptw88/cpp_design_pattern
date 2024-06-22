// Copyright saito 2024
#ifndef SRC_GUIDELINE18_VISITOR_HH_
#define SRC_GUIDELINE18_VISITOR_HH_


namespace Guideline18 {
template<typename T>
class Visitor {
  protected:
    ~Visitor() = default;

  public:
    virtual void visit(const T&) const = 0;
};
};  // namespace Guideline18
#endif  // SRC_GUIDELINE18_VISITOR_HH_

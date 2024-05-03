#ifndef GUIDELINE2_MONEY_HH_
#define GUIDELINE2_MONEY_HH_


namespace Guideline2 {
class Money {
  public:
    double amount_;

    Money(): amount_(0) {}
    Money(double amount): amount_(amount) {}

    Money(const Money&) = default;

    Money operator=(const Money&);
    Money operator*(double factor) { return Money(amount_ * factor); }
};
};  // namespace Guideline2

#endif  // GUIDELINE2_MONEY_HH_

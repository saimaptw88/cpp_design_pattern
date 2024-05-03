#ifndef GUIDELINE2_ITEM_HH_
#define GUIDELINE2_ITEM_HH_


#include "money.hh"


namespace Guideline2 {
constexpr double taxRatio = 1.15;

class Item {
  public:
    virtual ~Item() = default;
    virtual Money price() const = 0;
};
};  // namespace Guideline2

#endif  // GUIDELINE2_ITEM_HH_

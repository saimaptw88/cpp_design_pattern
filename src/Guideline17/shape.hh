#ifndef SRC_GUIDELINE17_SHAPE_HH_
#define SRC_GUIDELINE17_SHAPE_HH_


#include <variant>

#include "circle.hh"
#include "square.hh"


namespace Guideline17 {
using Shape = std::variant<Circle, Square>;
};  // namespace Guideline17
#endif  // SRC_GUIDELINE17_SHAPE_HH_

#ifndef GUIDELINE2_SERIALIZATION_HH_
#define GUIDELINE2_SERIALIZATION_HH_


#include <string>

namespace Guideline2 {
class Serialization {
  public:
    Serialization() = default;

    std::string encode(const std::string&) const;
    std::string decode(const std::string&) const;
};
};  // namespace Guideline2

#endif  // GUIDELINE2_SERIALIZATION_HH_

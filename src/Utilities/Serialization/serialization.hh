#ifndef UTILITIES_SERIALIZATION_HH_
#define UTILITIES_SERIALIZATION_HH_


#include <string>

namespace Utilities {
class Serialization {
  public:
    Serialization() = default;

    std::string encode(const std::string&) const;
    std::string decode(const std::string&) const;
};
};  // namespace Utilities

#endif  // UTILITIES_SERIALIZATION_HH_

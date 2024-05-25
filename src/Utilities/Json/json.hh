#ifndef UTILITIES_JSON_HH_
#define UTILITIES_JSON_HH_


#include <string>


namespace Utilities {
class Json {
  public:
    Json() = default;

    std::string to_json(const std::string&) const;
};
};  // namespace Utilities

#endif  // UTILITIES_JSON_HH_

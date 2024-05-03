#ifndef GUIDELINE2_JSON_HH_
#define GUIDELINE2_JSON_HH_


#include <string>


namespace Guideline2 {
class Json {
  public:
    Json() = default;

    std::string to_json(const std::string&) const;
};
};  // namespace Guideline2

#endif  // GUIDELINE2_JSON_HH_

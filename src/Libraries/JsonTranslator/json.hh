#ifndef LIBRARIES_JSONTRANSLATOR_JSON_HH_
#define LIBRARIES_JSONTRANSLATOR_JSON_HH_

#include <string>


namespace Libraries {
class Json {
  public:
    std::string to_json(const std::string&) const;
};
};  // namespace Libraries
#endif  // LIBRARIES_JSONTRANSLATOR_JSON_HH_

#ifndef LIBRARIES_JSONTRANSLATOR_JSON_HH_
#define LIBRARIES_JSONTRANSLATOR_JSON_HH_

#include <string>


class Json {
  public:
    std::string to_json(const std::string&) const;
};
#endif  // LIBRARIES_JSONTRANSLATOR_JSON_HH_

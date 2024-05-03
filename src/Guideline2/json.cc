#include "../Libraries/JsonTranslator/json.hh"
#include "json.hh"


namespace Guideline2 {
std::string Json::to_json(const std::string& str) const {
  auto json = Libraries::Json();
  return json.to_json(str);
}
};  // namespace Guideline2

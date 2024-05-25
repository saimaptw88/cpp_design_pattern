#include "../../Libraries/JsonTranslator/json.hh"
#include "json.hh"


namespace Utilities {
std::string Json::to_json(const std::string& str) const {
  auto json = Libraries::Json();
  return json.to_json(str);
}
};  // namespace Utilities

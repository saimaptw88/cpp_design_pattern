#include "json.hh"


namespace Libraries {
std::string Json::to_json(const std::string& str) const {
  return "json+" + str;
}
};

#include "../../Libraries/Serializer/serializer.hh"
#include "serialization.hh"


namespace Utilities {
std::string Serialization::encode(const std::string& str) const {
  auto serializer = Libraries::Serializer();
  return serializer.encode(str);
}

std::string Serialization::decode(const std::string& str) const {
  auto serializer = Libraries::Serializer();
  return serializer.decode(str);
}
};  // namespace Utilities

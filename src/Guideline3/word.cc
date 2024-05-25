#include <utility>

#include "byte_stream.hh"
#include "../Utilities/Json/json.hh"
#include "../Utilities/Serialization/serialization.hh"
#include "word.hh"


namespace Guideline3 {
void WORD::exportToJSON() const {
  auto json = Utilities::Json();
  std::cout << "WORD: " << json.to_json("word") << std::endl;
}

void WORD::serialize(ByteStream& byte_stream) const {
  auto serializer = Utilities::Serialization();
  std::cout << "WORD: "
            << serializer.encode("word")
            << ", "
            << byte_stream.name()
            << std::endl;
}
};  // namespace Guideline3

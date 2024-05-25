#include <utility>

#include "byte_stream.hh"
#include "pdf.hh"
#include "../Utilities/Json/json.hh"
#include "../Utilities/Serialization/serialization.hh"


namespace Guideline3 {
PDF::~PDF() = default;

void PDF::exportToJSON() const {
  auto json = Utilities::Json();
  std::cout << json.to_json("pdf") << std::endl;
}

void PDF::serialize(ByteStream& byte_stream) const {
  auto serializer = Utilities::Serialization();

  std::cout << "PDF: "
            << serializer.encode("pdf")
            << ", "
            << byte_stream.name()
            << std::endl;
}
};  // namespace Guideline3

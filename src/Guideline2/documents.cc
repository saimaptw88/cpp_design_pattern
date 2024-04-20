#include "documents.hh"
#include "../Libraries/Serializer/serializer.hh"
#include "../Libraries/JsonTranslator/json.hh"


void PDF::exportToJSON() const {
  auto json = Json();
  std::cout << json.to_json("pdf") << std::endl;
}

void PDF::serialize(ByteStream& byte_stream) const {
  auto serializer = Serializer();

  std::cout << "PDF: "
            << serializer.encode("pdf")
            << ", "
            << byte_stream.name()
            << std::endl;
}

void WORD::exportToJSON() const {
  auto json = Json();
  std::cout << "WORD: " << json.to_json("word") << std::endl;
}

void WORD::serialize(ByteStream& byte_stream) const {
  auto serializer = Serializer();
  std::cout << "WORD: "
            << serializer.encode("word")
            << ", "
            << byte_stream.name()
            << std::endl;
}

std::unique_ptr<Documents> createDocument(DocumentType type) {
  std::unique_ptr<Documents> document;

  switch (type) {
  case DocumentType::pdf:
    document = std::make_unique<PDF>();
    break;

  case DocumentType::word:
    document = std::make_unique<WORD>();
    break;

  default:
    break;
  }

  return document;
}

#include "documents.hh"


void PDF::exportToJSON() const {
  std::cout << "PDF: " << __func__ << std::endl;
}

void PDF::serialize(ByteStream& byte_stream) const {
  std::cout << "PDF: "
            << __func__
            << ", "
            << byte_stream.name()
            << std::endl;
}

void WORD::exportToJSON() const {
  std::cout << "WORD: " << __func__ << std::endl;
}

void WORD::serialize(ByteStream& byte_stream) const {
  std::cout << "WORD: "
            << __func__
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

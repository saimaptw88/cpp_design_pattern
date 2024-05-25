#include <iostream>

#include "deserialize.hh"
#include "document.hh"
#include "document_type.hh"
#include "execute.hh"
#include "serialize.hh"
#include "pdf.hh"


namespace Guideline5 {
void execute() {
  std::cout << "\nGuideline5" << std::endl;

  Document *doc = new PDF();

  Document* serialized = serialize(DocumentType::pdf, DocumentType::word, *doc);
  Document* deserialized = deserialize(DocumentType::word, DocumentType::pdf, *serialized);

  delete doc;
}
};  // namespace Guideline5

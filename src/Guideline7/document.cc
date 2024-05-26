#include "document.hh"


namespace Guideline7 {
void useDocument(Document& doc) {
  doc.exportToJSON();
}

template <Document T>
void useDocument(T& doc) {
  doc.exportToJSON();
}
};  // namespace Guideline7

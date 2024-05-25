#ifndef SRC_GUIDELINE5_DESERIALIZE_HH_
#define SRC_GUIDELINE5_DESERIALIZE_HH_


#include "document.hh"
#include "document_type.hh"

namespace Guideline5 {
Document* deserialize(DocumentType, DocumentType, Document&);
};  // namespace Guideline5
#endif  // SRC_GUIDELINE5_DESERIALIZE_HH_

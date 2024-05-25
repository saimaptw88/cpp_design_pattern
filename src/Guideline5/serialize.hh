#ifndef SRC_GUIDELINE5_SERIALIZE_HH_
#define SRC_GUIDELINE5_SERIALIZE_HH_


#include "document.hh"
#include "document_type.hh"

namespace Guideline5 {
Document* serialize(DocumentType, DocumentType, Document&);
};  // namespace Guideline5
#endif  // SRC_GUIDELINE5_SERIALIZE_HH_

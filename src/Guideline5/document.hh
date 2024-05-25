#ifndef SRC_GUIDELINE5_DOCUMENT_HH_
#define SRC_GUIDELINE5_DOCUMENT_HH_


#include "JSON.hh"
#include "serializable.hh"

namespace Guideline5 {
class Document : public JSON, public Serializable {
  public:
    virtual ~Document() = default;
};
};  // namespace Guideline5
#endif  // SRC_GUIDELINE5_DOCUMENT_HH_

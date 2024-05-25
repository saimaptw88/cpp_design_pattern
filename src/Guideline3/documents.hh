#ifndef GUIDELINE3_DOCUMENTS_HH_
#define GUIDELINE3_DOCUMENTS_HH_

#include <iostream>
#include <memory>
#include <string>

#include "byte_stream.hh"
#include "json_exportable.hh"
#include "serializable.hh"

namespace Guideline3 {
class Documents /*: public JSONExportable, public Serializable*/ {
  public:
    virtual ~Documents() = default;
    virtual void exportToJSON() const = 0;
    virtual void serialize(ByteStream&) const = 0;
};
};  // namespace Guideline3

#endif  // GUIDELINE3_DOCUMENTS_HH_

#ifndef SRC_GUIDELINE5_PDF_HH_
#define SRC_GUIDELINE5_PDF_HH_


#include "document.hh"

namespace Guideline5 {
class PDF : public Document {
  public:
    ~PDF() = default;

    void exportJSON() const override;
    void serialize(ByteStream&) const override;
};
};  // namespace Guideline5
#endif  // SRC_GUIDELINE5_PDF_HH_

#ifndef SRC_GUIDELINE3_PDF_HH_
#define SRC_GUIDELINE3_PDF_HH_

#include "documents.hh"

namespace Guideline3 {
class PDF : public Documents {
  public:
    ~PDF();

    void exportToJSON() const override;
    void serialize(ByteStream&) const override;
};
};  // namespace Guideline3

#endif  // SRC_GUIDELINE3_PDF_HH_

#ifndef SRC_GUIDELINE5_WORD_HH_
#define SRC_GUIDELINE5_WORD_HH_


#include "document.hh"

namespace Guideline5 {
class WORD : public Document {
  public:
    ~WORD() = default;

    void exportJSON() const override;
    void serialize(ByteStream&) const override;
};
};  // namespace Guideline5
#endif  // SRC_GUIDELINE5_WORD_HH_

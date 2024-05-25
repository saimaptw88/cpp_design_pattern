#ifndef SRC_GUIDELINE3_WORD_HH_
#define SRC_GUIDELINE3_WORD_HH_


#include "documents.hh"


namespace Guideline3 {
class WORD : public Guideline3::Documents {
  public:
    ~WORD() = default;

    void exportToJSON() const override;
    void serialize(ByteStream&) const override;
};

};  // namespace Guideline3

#endif  // SRC_GUIDELINE3_WORD_HH_

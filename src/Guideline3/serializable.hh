#ifndef SRC_GUIDELINE3_SERIALIZABLE_HH_
#define SRC_GUIDELINE3_SERIALIZABLE_HH_


class ByteStream;

namespace Guideline3 {
class Serializable {
  public:
    virtual ~Serializable() = default;
    virtual void serialize(ByteStream&) const = 0;
};
};  // namespace Guideline3

#endif  // SRC_GUIDELINE3_SERIALIZABLE_HH_

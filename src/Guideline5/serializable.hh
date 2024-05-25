#ifndef SRC_GUIDELINE5_SERIALIZABLE_HH_
#define SRC_GUIDELINE5_SERIALIZABLE_HH_


namespace Guideline5 {
class ByteStream;

class Serializable {
  public:
    virtual ~Serializable() = default;
    virtual void serialize(ByteStream&) const = 0;
};
};  // namespace Guideline5
#endif  // SRC_GUIDELINE5_SERIALIZABLE_HH_

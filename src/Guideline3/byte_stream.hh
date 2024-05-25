#ifndef GUIDELINE3_BYTE_STREAM_HH_
#define GUIDELINE3_BYTE_STREAM_HH_


#include <string>

namespace Guideline3 {
class ByteStream {
  public:
    std::string name() {
      return std::string("ByteStream");
    }
};
};  // namespace Guideline3
#endif  // GUIDELINE3_BYTE_STREAM_HH_

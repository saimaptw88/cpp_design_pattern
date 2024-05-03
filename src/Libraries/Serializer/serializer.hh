#ifndef LIBRARIES_SERIALIZER_SERIALIZER_HH_
#define LIBRARIES_SERIALIZER_SERIALIZER_HH_

#include <string>


namespace Libraries {
class Serializer {
  public:
    std::string decode(const std::string&) const;
    std::string encode(const std::string&) const;
};
};  // namespace Libraries

#endif  // LIBRARIES_SERIALIZER_SERIALIZER_HH_

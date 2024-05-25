#ifndef SRC_GUIDELINE5_JSON_HH_
#define SRC_GUIDELINE5_JSON_HH_


namespace Guideline5 {
class JSON {
  public:
    virtual ~JSON() = default;
    virtual void exportJSON() const = 0;
};
};  // namespace Guideline5
#endif  // SRC_GUIDELINE5_JSON_HH_

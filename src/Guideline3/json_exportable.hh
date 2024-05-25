#ifndef SRC_GUIDELINE3_JSON_EXPORTABLE_HH_
#define SRC_GUIDELINE3_JSON_EXPORTABLE_HH_


namespace Guideline3 {
class JSONExportable {
  public:
    virtual ~JSONExportable() = default;
    virtual void exportToJSON() const = 0;
};
};

#endif  // SRC_GUIDELINE3_JSON_EXPORTABLE_HH_

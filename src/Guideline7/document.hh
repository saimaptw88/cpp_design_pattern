#ifndef SRC_GUIDELINE7__DOCUMENT_HH_
#define SRC_GUIDELINE7__DOCUMENT_HH_


#include <concepts>


namespace Guideline7 {
class ByteStream;

class Document {
  public:
    virtual ~Document() = default;

    virtual void exportToJSON() const;
    virtual void serialize(ByteStream&) const = 0;
};

void useDocument(Document&);

template <typename T>
concept Documents = requires(T t, ByteStream b) {
  t.exportToJSON();
  t.serialize(b);
};

template <Documents T>
void useDocument(T& doc) {
  doc.exportToJSON();
}
};  // namespace Guideline7
#endif  // SRC_GUIDELINE7__DOCUMENT_HH_

#ifndef GUIDELINE2_DOCUMENTS_HH_
#define GUIDELINE2_DOCUMENTS_HH_

#include <iostream>
#include <memory>
#include <string>


namespace Guideline2 {
enum class DocumentType {
  pdf,
  word,
  excel,
};


class ByteStream {
  public:
    std::string name() {
      return std::string("ByteStream");
    }
};

class Documents {
  public:
    virtual ~Documents() = default;

    virtual void exportToJSON() const = 0;
    virtual void serialize(ByteStream&) const = 0;
};

class PDF : public Documents {
  public:
    ~PDF() = default;

    void exportToJSON() const override;
    void serialize(ByteStream&) const override;
};

class WORD : public Documents {
  public:
    ~WORD() = default;

    void exportToJSON() const override;
    void serialize(ByteStream&) const override;
};


std::unique_ptr<Documents> createDocument(DocumentType);
};  // namespace Guideline2

#endif  // GUIDELINE2_DOCUMENTS_HH_

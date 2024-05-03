#ifndef GUIDELINE2_CPP_BOOK_HH_
#define GUIDELINE2_CPP_BOOK_HH_


#include <string>

#include "item.hh"


namespace Guideline2 {
class CppBook : public Item {
  public:
    explicit CppBook(std::string title, std::string author, Money price)
    : title_(title), author_(author), priceWithTax_(price * taxRatio) {}

    const std::string& title() const { return title_; }
    const std::string& author() const { return author_; }
    Money price() const override { return priceWithTax_; }

  private:
    std::string title_;
    std::string author_;
    Money priceWithTax_;
};
};  // namespace Guideline2

#endif  // GUIDELINE2_CPP_BOOK_HH_

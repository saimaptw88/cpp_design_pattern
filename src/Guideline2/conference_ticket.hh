#ifndef GUIDELINE2_CONFERENCE_TICKET_HH_
#define GUIDELINE2_CONFERENCE_TICKET_HH_


#include <string>

#include "item.hh"


namespace Guideline2 {
class ConferenceTicket : public Item {
  public:
    explicit ConferenceTicket(std::string name, Money price)
    : name_(name), priceWithTax_(price * taxRatio) {}

    const std::string& name() const { return name_; }
    Money price() const override { return priceWithTax_; }

  private:
    std::string name_;
    Money priceWithTax_;
};
};  // namespace Guideline2

#endif  // GUIDELINE2_CONFERENCE_TICKET_HH_

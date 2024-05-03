#include <algorithm>
#include <iostream>
#include <memory>
#include <numeric>
#include <utility>
#include <vector>

#include "conference_ticket.hh"
#include "cpp_book.hh"
#include "documents.hh"
#include "execute.hh"
#include "users.hh"


namespace Guideline2 {
void execute() {
  auto document = createDocument(DocumentType::pdf);
  auto user = std::make_unique<User>("tester1");

  std::cout << user->name() << std::endl;
  user->readDocumet(std::move(document));

  auto items = std::vector<std::unique_ptr<Item>>();

  items.emplace_back(std::make_unique<CppBook>("Effective C++", "Scott Mayers", 19.99));
  items.emplace_back(std::make_unique<CppBook>("C++ Templates", "Douglas Gregor", 49.99));
  items.emplace_back(std::make_unique<ConferenceTicket>("CppCon", 999.0));
  items.emplace_back(std::make_unique<ConferenceTicket>("Meeting", 699.0));
  items.emplace_back(std::make_unique<ConferenceTicket>("C++ on Sea", 499.0));

  const double total_price = std::accumulate(items.begin(), items.end(), 0.0, [](double accu, auto&& item) { return accu + item->price().amount_; });

  std::cout << "Total price: " << total_price << std::endl;
}
};  // namespace Guideline2

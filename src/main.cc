#include <iostream>
#include <memory>
#include <utility>

#include "Guideline2/documents.hh"
#include "Guideline2/users.hh"


int main() {
  auto document = createDocument(DocumentType::pdf);
  auto user = std::make_unique<User>("tester1");

  std::cout << user->name() << std::endl;
  user->readDocumet(std::move(document));

  return 0;
}

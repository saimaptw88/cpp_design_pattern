#include <iostream>
#include <memory>
#include <utility>

#include "documents.hh"
#include "pdf.hh"
#include "execute.hh"
#include "users.hh"
#include "word.hh"


namespace Guideline3 {
void execute() {
  std::cout << "Guideline3" << std::endl;

  auto user = std::make_unique<User>("tester2");
  auto docs = std::make_unique<PDF>();

  user->readDocumet(std::move(docs));
}
};  // namespace Guideline3

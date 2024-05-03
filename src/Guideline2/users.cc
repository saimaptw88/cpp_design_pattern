#include "users.hh"
#include "documents.hh"


namespace Guideline2 {
std::string User::name() {
  return name_;
}

void User::readDocumet(std::unique_ptr<Documents> docs) {
  docs->exportToJSON();
}
};  // namespace Guideline2

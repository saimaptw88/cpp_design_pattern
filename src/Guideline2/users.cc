#include "users.hh"
#include "documents.hh"


std::string User::name() {
  return name_;
}

void User::readDocumet(std::unique_ptr<Documents> docs) {
  docs->exportToJSON();
}

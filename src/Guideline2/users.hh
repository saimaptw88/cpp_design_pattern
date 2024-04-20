#ifndef GUIDELINE2_USERS_HH_
#define GUIDELINE2_USERS_HH_

#include <memory>
#include <string>


class Documents;

class User {
  public:
    User(const std::string& name) : name_(name) {}
    std::string name();
    void readDocumet(std::unique_ptr<Documents>);

  private:
    std::string name_;
};

#endif  // GUIDELINE2_USERS_HH_

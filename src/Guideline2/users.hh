#ifndef GUIDELINE2_USERS_HH_
#define GUIDELINE2_USERS_HH_

#include <memory>
#include <string>


namespace Guideline2 {
class Documents;

class User {
  public:
    User(const std::string& name) : name_(name) {}
    std::string name();
    void readDocumet(std::unique_ptr<Documents>);

  private:
    std::string name_;
};
};  // namespace Guideline2

#endif  // GUIDELINE2_USERS_HH_

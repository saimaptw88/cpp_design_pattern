#ifndef GUIDELINE3_USERS_HH_
#define GUIDELINE3_USERS_HH_

#include <memory>
#include <string>


namespace Guideline3 {
class Documents;

class User {
  public:
    User(const std::string& name) : name_(name) {}
    std::string name();
    void readDocumet(std::unique_ptr<Documents>);

  private:
    std::string name_;
};
};  // namespace Guideline3

#endif  // GUIDELINE3_USERS_HH_

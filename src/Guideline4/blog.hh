#ifndef SRC_GUIDELINE4_BLOG_HH_
#define SRC_GUIDELINE4_BLOG_HH_


#include <string>

namespace Guideline4 {
class Blog {
  public:
    void create();
    void update();
    void destroy();

  private:
    std::string post_;
};
};  // namespace Guideline4
#endif  // SRC_GUIDELINE4_BLOG_HH_

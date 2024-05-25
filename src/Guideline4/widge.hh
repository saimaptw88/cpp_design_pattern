#ifndef SRC_GUIDELINE4_WIDGET_HH_
#define SRC_GUIDELINE4_WIDGET_HH_


#include <vector>

#include "blog.hh"

namespace Guideline4 {
namespace BlogCollection {
void addBlogToCollection(std::vector<Blog>& blogs, Blog& blog);
};  // namespace BlogCollection

class Widget {
  public:
    void addBlog(Blog& blog);

  private:
    std::vector<Blog> blogs_;
};
};  // namespace Guideline4
#endif  // SRC_GUIDELINE4_WIDGET_HH_

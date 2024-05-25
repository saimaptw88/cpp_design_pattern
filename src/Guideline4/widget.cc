#include "widge.hh"


namespace Guideline4 {
namespace BlogCollection {
void addBlogToCollection(std::vector<Blog>& blogs, Blog& blog) {
  blogs.push_back(blog);
}
};  // namespace BlogCollection

void Widget::addBlog(Blog& blog) {
  BlogCollection::addBlogToCollection(blogs_, blog);
}
};  // namespace Guideline4

add_library(guideline4 SHARED widget.cc blog.cc)

target_link_libraries(
guideline4
PUBLIC "-pthread"
)

add_library(guideline2 SHARED documents.cc users.cc)

target_link_libraries(
guideline2
PUBLIC "-pthread"
serializer
json_translator
)

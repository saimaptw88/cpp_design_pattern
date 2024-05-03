add_library(guideline2 SHARED documents.cc users.cc json.cc serialization.cc execute.cc)

target_link_libraries(
guideline2
PUBLIC "-pthread"
serializer
json_translator
)

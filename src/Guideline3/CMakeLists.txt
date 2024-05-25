add_library(guideline3 SHARED execute.cc users.cc pdf.cc word.cc)

target_link_libraries(
guideline3
PUBLIC "-pthread"
json
serialization
)

add_library(guideline5 SHARED serialize.cc deserialize.cc execute.cc pdf.cc word.cc)

target_link_libraries(
guideline5
PUBLIC "-pthread"
)

cmake_minimum_required(VERSION 3.20)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

add_executable(main main.cc)
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

add_subdirectory(Guideline2)
add_subdirectory(Guideline3)
add_subdirectory(Guideline4)
add_subdirectory(Guideline5)
add_subdirectory(Guideline6)
add_subdirectory(Guideline7)
add_subdirectory(Guideline8)
add_subdirectory(Guideline9)
add_subdirectory(Guideline15)
add_subdirectory(Guideline16)
add_subdirectory(Guideline17)
add_subdirectory(Guideline18)
add_subdirectory(Guideline19)
add_subdirectory(Guideline21)
add_subdirectory(Guideline22)

add_subdirectory(Libraries)
add_subdirectory(Utilities)

target_link_libraries(
main
PUBLIC "-pthread"
guideline2
guideline3
guideline4
guideline5
guideline6
guideline7
guideline8
guideline9
guideline15
guideline16
guideline17
guideline18
guideline19
guideline21
guideline22
)

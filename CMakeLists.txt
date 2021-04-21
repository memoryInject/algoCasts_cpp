cmake_minimum_required(VERSION 3.10)
project(algoCast)

# Download and unpack googletest at configure time
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        master
  SOURCE_DIR     "${CMAKE_CURRENT_SOURCE_DIR}/libs/googletest"
)

FetchContent_GetProperties(googletest)
if(NOT googletest_POPULATED)
  set(FETCHCONTENT_QUIET NO)
  FetchContent_Populate(googletest)
endif()

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/libs/googletest/ ${CMAKE_CURRENT_BINARY_DIR}/googletest)
enable_testing()
include(GoogleTest)
add_subdirectory(src/01_reverseString)
add_subdirectory(src/02_palindrome)
#add_subdirectory(src/17_treeTraversal)

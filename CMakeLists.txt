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
add_subdirectory(src/03_integerReversal)
add_subdirectory(src/04_maxChar)
add_subdirectory(src/05_fizzBuzz)
add_subdirectory(src/06_arrayChunking)
add_subdirectory(src/07_anagrams)
add_subdirectory(src/08_sentence_capitalization)
add_subdirectory(src/09_print_steps)
add_subdirectory(src/10_two_sided_steps_pyramids)
add_subdirectory(src/11_find_vowels)
add_subdirectory(src/12_matrix_spiral)
add_subdirectory(src/13_fibonacci_series)
add_subdirectory(src/14_queue_weave)
add_subdirectory(src/15_linkedList_midpoint)
#add_subdirectory(src/17_treeTraversal)
#add_subdirectory(src/18_treeWidth_with_levelWidth)
#add_subdirectory(src/19_BST_validation)

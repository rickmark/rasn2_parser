cmake_minimum_required(VERSION 3.5)
project(asn1_parser CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

include(FetchContent)
FetchContent_Declare(
  rice
  GIT_REPOSITORY https://github.com/ruby-rice/rice.git
  GIT_TAG 4.8.0
)
FetchContent_MakeAvailable(rice)

list(PREPEND CMAKE_MODULE_PATH "${rice_SOURCE_DIR}")

find_package(Ruby REQUIRED)

include(FetchContent)

set(ANTLR_BUILD_CPP_TESTS OFF)
add_subdirectory(antlr4-upstream/runtime/Cpp)

file(GLOB ANTLRGEN_SOURCES CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/antlrgen/*.cpp")

add_library(${CMAKE_PROJECT_NAME} MODULE asn1_parser.cpp ${ANTLRGEN_SOURCES})


get_target_property(RUBY_EXT_SUFFIX Ruby::Ruby INTERFACE_RUBY_EXTENSION_SUFFIX)

set_target_properties(${CMAKE_PROJECT_NAME} PROPERTIES
  PREFIX ""
  SUFFIX "${RUBY_EXT_SUFFIX}"
  OUTPUT_NAME "asn1_parser"
  LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/../../lib/asn1_parser"
)

target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE Rice::Rice Ruby::Module antlr4_static)
cmake_minimum_required(VERSION 3.20)
cmake_policy(SET CMP0091 NEW)
project(black_reconstructed_sources LANGUAGES C)

if(NOT MSVC)
  message(FATAL_ERROR "This reconstruction currently requires MSVC x86.")
endif()
if(NOT CMAKE_SIZEOF_VOID_P EQUAL 4)
  message(FATAL_ERROR "Configure with a 32-bit generator, for example -A Win32.")
endif()

file(GLOB BLACK_FUNCTION_SOURCES CONFIGURE_DEPENDS
  "${CMAKE_CURRENT_LIST_DIR}/../functions/*.c")
list(LENGTH BLACK_FUNCTION_SOURCES BLACK_FUNCTION_COUNT)
if(NOT BLACK_FUNCTION_COUNT EQUAL 13676)
  message(FATAL_ERROR "Expected 13,676 function sources; found ${BLACK_FUNCTION_COUNT}.")
endif()

# Keep one translation unit per function so each function's declarations stay scoped.
add_library(black_reconstructed_objects OBJECT ${BLACK_FUNCTION_SOURCES})
set_target_properties(black_reconstructed_objects PROPERTIES
  C_STANDARD 11
  C_STANDARD_REQUIRED YES
  C_EXTENSIONS YES
  MSVC_RUNTIME_LIBRARY MultiThreadedDLL
  POSITION_INDEPENDENT_CODE OFF)
target_compile_definitions(black_reconstructed_objects PRIVATE WIN32 _WINDOWS)
target_compile_options(black_reconstructed_objects PRIVATE /GS- /Gy /Zl /Oy "$<$<CONFIG:Release>:/O2>")

# The archive contains every function object; consumers can link this library or
# use the object target when they need every function included in their image.
add_library(black_public_functions STATIC $<TARGET_OBJECTS:black_reconstructed_objects>)
set_target_properties(black_public_functions PROPERTIES OUTPUT_NAME black_public_functions)

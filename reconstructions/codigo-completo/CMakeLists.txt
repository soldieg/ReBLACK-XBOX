cmake_minimum_required(VERSION 4.0)
cmake_policy(SET CMP0091 NEW)
cmake_policy(SET CMP0184 NEW)
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
set_property(TARGET black_reconstructed_objects PROPERTY MSVC_RUNTIME_CHECKS "")
target_compile_options(black_reconstructed_objects PRIVATE
  /GS- /Gy /Zl /Oy
  "$<$<CONFIG:Release>:/O2>"
  "$<$<CONFIG:Debug>:/Zi>"
  "$<$<CONFIG:Debug>:/Od>"
  "$<$<CONFIG:Debug>:/Oy->")
set_target_properties(black_reconstructed_objects PROPERTIES
  COMPILE_PDB_NAME black_reconstructed_objects)

# The archive contains every function object; consumers can link this library or
# use the object target when they need every function included in their image.
add_library(black_public_functions STATIC $<TARGET_OBJECTS:black_reconstructed_objects>)
set_target_properties(black_public_functions PROPERTIES OUTPUT_NAME black_public_functions)

set(BLACK_DEBUG_OUTPUT_DIR "${CMAKE_CURRENT_LIST_DIR}/debug")
file(MAKE_DIRECTORY "${BLACK_DEBUG_OUTPUT_DIR}")

# This host DLL exists for symbol and link-map inspection; it is not an XBE runtime image.
add_library(black_reconstructed_debug SHARED $<TARGET_OBJECTS:black_reconstructed_objects>)
set_target_properties(black_reconstructed_debug PROPERTIES
  OUTPUT_NAME black_reconstructed_debug
  RUNTIME_OUTPUT_DIRECTORY_DEBUG "${BLACK_DEBUG_OUTPUT_DIR}"
  ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${BLACK_DEBUG_OUTPUT_DIR}"
  PDB_OUTPUT_DIRECTORY_DEBUG "${BLACK_DEBUG_OUTPUT_DIR}"
  COMPILE_PDB_OUTPUT_DIRECTORY_DEBUG "${BLACK_DEBUG_OUTPUT_DIR}")
target_link_options(black_reconstructed_debug PRIVATE
  "$<$<CONFIG:Debug>:/NOENTRY>"
  "$<$<CONFIG:Debug>:/DEBUG:FULL>"
  "$<$<CONFIG:Debug>:/OPT:NOREF>"
  "$<$<CONFIG:Debug>:/OPT:NOICF>"
  "$<$<CONFIG:Debug>:/INCREMENTAL:NO>"
  "$<$<CONFIG:Debug>:/MAP:${BLACK_DEBUG_OUTPUT_DIR}/black_reconstructed_debug.map>")

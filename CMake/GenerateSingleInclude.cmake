#[=======================================================================[.rst:
GenerateSingleInclude
--------------------

Generate a single include file that groups all module headers declared
under the **HEADERS** file. This allows using the library with one
convenient include directive.
The generated header file will be named: ``${PROJECT_NAME}.h``

#]=======================================================================]
set (SINGLE_INCLUDE "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}.h")
file (WRITE "${SINGLE_INCLUDE}" "/** This file was generated automatically by CMake */\n")
file (APPEND "${SINGLE_INCLUDE}" "\n")
file (READ "${PROJECT_SOURCE_DIR}/LICENSE" License)
file (APPEND "${SINGLE_INCLUDE}" "/*\n${License}\n*/\n")

file (APPEND "${SINGLE_INCLUDE}" "#ifndef SLXIO_H
#define SLXIO_H  \n")
file (APPEND "${SINGLE_INCLUDE}" "\n")
file (GLOB_RECURSE PROJECT_HEADERS *.h)

foreach (hdr IN LISTS PROJECT_HEADERS)
  if (NOT hdr MATCHES "ThirdParty" AND NOT hdr MATCHES "Documentation")
    file (APPEND "${SINGLE_INCLUDE}" "#include \"${hdr}\"\n")
  endif ()
endforeach ()
file (APPEND "${SINGLE_INCLUDE}" "\n")
file (APPEND "${SINGLE_INCLUDE}" "#endif // SLXIO_H")

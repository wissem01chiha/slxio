#[=======================================================================[.rst:
GenerateSingleInclude
-------------------- 
Gnerate a Single include to group all mdoules headers declared
under HEADERS file for using the librray with one include, 
experimental version for now 
the heder genrted with name ${PROJECT_NAME}.h

#]=======================================================================]
set(SINGLE_INCLUDE "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}.h")
file(WRITE "${SINGLE_INCLUDE}" 
"/** This file was generated automatically by CMake */\n"
)
file(APPEND "${SINGLE_INCLUDE}" "\n")
file(READ "${PROJECT_SOURCE_DIR}/LICENSE" License)
file(APPEND "${SINGLE_INCLUDE}" "/*\n${License}\n*/\n")

file(APPEND "${SINGLE_INCLUDE}"  
"#ifndef SLXIO_H 
#define SLXIO_H  \n"
)
file(APPEND "${SINGLE_INCLUDE}" "\n")
file(GLOB_RECURSE PROJECT_HEADERS *.h)

# exclude third party and Docs includes
foreach(hdr IN LISTS PROJECT_HEADERS) 
    if(NOT hdr MATCHES "ThirdParty" AND NOT hdr MATCHES "Documentation")
        file(APPEND "${SINGLE_INCLUDE}" "#include \"${hdr}\"\n") 
    endif()
endforeach()
file(APPEND "${SINGLE_INCLUDE}" "\n")
file(APPEND "${SINGLE_INCLUDE}" "#endif // SLXIO_H")
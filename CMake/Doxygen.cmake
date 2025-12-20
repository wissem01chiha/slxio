#[=======================================================================[.rst:
Doxygen 
---------------------
#]=======================================================================]

if(NOT ENABLE_DOCUMENTATION)
    return()    
endif()

message(STATUS "Checking if Doxygen is available")
find_package(Doxygen QUIET)

if(NOT DOXYGEN_FOUND)
    message(WARNING "Doxygen not found, documentation will not be generated")
    return()
endif()
message(STATUS "Doxygen found: ${DOXYGEN_EXECUTABLE}")


set(DOXYGEN_OUTPUT_DIR "${CMAKE_CURRENT_BINARY_DIR}")
set(DOXYGEN_HTML_HEADER ${CMAKE_CURRENT_SOURCE_DIR}/assets/doxy_header.html)
set(DOXYGEN_LAYOUT_FILE ${CMAKE_CURRENT_SOURCE_DIR}/layouts/DoxygenLayout.xml)
set(PROJECT_LOGO_PATH ${CMAKE_CURRENT_SOURCE_DIR}/logo/logo.png)
set(DOXYGEN_EXTRA_STYLESHEET "")
set(DOXYGEN_HTML_FOOTER      "")


set(DOXYGEN_INPUT "${PROJECT_SOURCE_DIR}/Common \
                ${PROJECT_SOURCE_DIR}/IO \
                ${PROJECT_SOURCE_DIR}/Simulink/Core \
                ${PROJECT_SOURCE_DIR}/Simulink/Configuration \
                 ${PROJECT_SOURCE_DIR}/README.md \
                ${PROJECT_SOURCE_DIR}/Documentation ")

set(MAINPAGE "${PROJECT_SOURCE_DIR}/README.md")

# A workaround for configure_module function that generates DoxyFile.h
# while Doxygen needs Doxyfile to run properly, both files still beeing 
# generated
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in 
 ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY
)

add_custom_target(documentation ALL
    COMMAND ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Generating ${PROJECT_NAME} API documentation with Doxygen"
    VERBATIM
)
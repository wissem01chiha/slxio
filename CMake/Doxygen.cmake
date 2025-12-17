message(STATUS "Checking if Doxygen is available")
find_package(Doxygen QUIET)

set(DOXYGEN_OUTPUT_DIR "${CMAKE_BINARY_DIR}/doc")
set(DOXYGEN_INPUT "${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/src ${PROJECT_SOURCE_DIR}/README.md ${PROJECT_SOURCE_DIR}/doc \
${PROJECT_SOURCE_DIR}/doc/doxygen.h")

set(MAINPAGE "${PROJECT_SOURCE_DIR}/README.md")

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in ${CMAKE_BINARY_DIR}/doc/Doxyfile @ONLY)

add_custom_target(documents ALL
    COMMAND ${DOXYGEN_EXECUTABLE} ${CMAKE_BINARY_DIR}/doc/Doxyfile
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Generating ${PROJECT_NAME} API documentation with Doxygen"
    VERBATIM
)

add_dependencies(documents slxio)
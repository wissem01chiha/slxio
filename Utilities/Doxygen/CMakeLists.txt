find_package(Doxygen REQUIRED)

set(DOXYGEN_BASE_DIR "${PROJECT_SOURCE_DIR}/Utilities/Doxygen")
set(DOXYGEN_OUTPUT_DIR "${CMAKE_CURRENT_BINARY_DIR}")
set(DOXYGEN_EXTRA_STYLESHEET "${PROJECT_SOURCE_DIR}/Documentation/_assets/css/doxygen-awesome.css")
SET(DOXYGEN_MAINPAGE_MDFILE  "${PROJECT_SOURCE_DIR}/Documentation/Reference/index.md")

set(DOXYGEN_INPUT
  "${PROJECT_SOURCE_DIR}/Common/Core ${PROJECT_SOURCE_DIR}/Common/DataModel ${PROJECT_SOURCE_DIR}/Documentation/Reference/index.md ${PROJECT_SOURCE_DIR}/IO ${PROJECT_SOURCE_DIR}/Simulink/Core"
)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in
                ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)

add_custom_target(Documentation
  COMMAND ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
  COMMENT "Generating ${PROJECT_NAME} API Documentation with Doxygen"
  VERBATIM)

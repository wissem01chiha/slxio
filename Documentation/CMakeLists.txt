find_package(Doxygen REQUIRED)

set(CMAKE_DOXYGEN_OUTPUT_DIR ${CMAKE_CURRENT_BINARY_DIR})
set(CMAKE_DOXYGEN_MAINPAGE_MDFILE "${PROJECT_SOURCE_DIR}/Documentation/Manual.md")
set(CMAKE_DOXYGEN_WARN_LOGFILE "${PROJECT_BINARY_DIR}/Documentation/doxygen_warnings.log")

file(GLOB PAGES ${PROJECT_SOURCE_DIR}/Documentation/*.md)
file(GLOB TUTORIALS ${PROJECT_SOURCE_DIR}/Documentation/Tutorials/*.md)
file(GLOB EXAMPLES ${PROJECT_SOURCE_DIR}/Documentation/Examples/*.md)
file(GLOB REFERENCE ${PROJECT_SOURCE_DIR}/Documentation/Reference/*.md)
file(GLOB INTRODUCTION ${PROJECT_SOURCE_DIR}/Documentation/Introduction/*.md)
file(GLOB INTEGRATION ${PROJECT_SOURCE_DIR}/Documentation/Integration/*.md)
file(GLOB PLATFORM ${PROJECT_SOURCE_DIR}/Documentation/Platform/*.md)
file(GLOB CONTRIBUTING ${PROJECT_SOURCE_DIR}/Documentation/Contributing/*.md)
file(GLOB CHANGELOG ${PROJECT_SOURCE_DIR}/Documentation/Changelog/*.md)
file(GLOB LICENSES ${PROJECT_SOURCE_DIR}/Documentation/Licenses/*.md)

set(CMAKE_DOXYGEN_INPUT_LIST
  ${PROJECT_SOURCE_DIR}/Common/Core
  ${PROJECT_SOURCE_DIR}/Common/DataModel
  ${PROJECT_SOURCE_DIR}/Common/System
  ${PROJECT_SOURCE_DIR}/IO 
  ${PROJECT_SOURCE_DIR}/Simulink/Core
  ${PROJECT_SOURCE_DIR}/Simulink/Data 
  ${PROJECT_SOURCE_DIR}/Simulink/Misc
  ${PROJECT_SOURCE_DIR}/Simulink/Configuration
  ${PROJECT_SOURCE_DIR}/Simulink/Annotation
  ${PROJECT_SOURCE_DIR}/Simulink/Layout
  ${PROJECT_SOURCE_DIR}/Simulink/Stateflow
  ${PROJECT_SOURCE_DIR}/Simulink/Library/AdditionalMathDiscrete
  ${PROJECT_SOURCE_DIR}/Simulink/Library/CommonlyUsedBlocks
  ${PROJECT_SOURCE_DIR}/Simulink/Library/Continuous
  ${PROJECT_SOURCE_DIR}/Simulink/Library/Discontinuities
  ${PROJECT_SOURCE_DIR}/Visualization/Core
  ${PROJECT_SOURCE_DIR}/Visualization/Qt
  ${TUTORIALS}
  ${EXAMPLES}
  ${REFERENCE}
  ${PAGES}
  ${INTRODUCTION}
  ${INTEGRATION}
  ${PLATFORM}
  ${PROJECT_SOURCE_DIR}/Documentation/Contributing/RunningTests.md
  ${CONTRIBUTING}
  ${CHANGELOG}
  ${LICENSES}
)
string(REPLACE ";" " \\\n" CMAKE_DOXYGEN_INPUT_LIST "${CMAKE_DOXYGEN_INPUT_LIST}")
configure_file(${PROJECT_SOURCE_DIR}/CMake/Templates/Doxyfile.in
              ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)

add_custom_target(Documentation
  COMMAND ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
  COMMENT "Generating ${PROJECT_NAME} API Documentation with Doxygen"
  VERBATIM
)

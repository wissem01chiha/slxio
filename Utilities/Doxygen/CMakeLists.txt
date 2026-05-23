if(SLXIO_DOXYGEN_DOCUMENTATION)

  set(DOXYGEN_OUTPUT_DIR    "${CMAKE_CURRENT_BINARY_DIR}")

  set(DOXYGEN_HTML_HEADER   "${PROJECT_SOURCE_DIR}/Documentation/Doxygen/Layouts/DoxygenHeaderLayout.html")
  set(DOXYGEN_LAYOUT_FILE   "${PROJECT_SOURCE_DIR}/Documentation/Doxygen/Layouts/DoxygenLayout.xml")
  set(PROJECT_LOGO_PATH     "${PROJECT_SOURCE_DIR}/Documentation/Doxygen/Assets/Icon.png")

  set(DOXYGEN_EXTRA_STYLESHEET
      "${PROJECT_SOURCE_DIR}/Documentation/Doxygen/Stylesheets/doxygen-awesome-css/doxygen-awesome.css")
  set(DOXYGEN_EXTRA_FILES
      "${PROJECT_SOURCE_DIR}/Documentation/Doxygen/Stylesheets/doxygen-awesome-css/doxygen-awesome-darkmode-toggle.js
       ${PROJECT_SOURCE_DIR}/Documentation/Doxygen/Stylesheets/doxygen-awesome-css/doxygen-awesome-fragment-copy-button.js")

  set(DOXYGEN_HTML_FOOTER "")

  set(DOXYGEN_INPUT
      "${PROJECT_SOURCE_DIR}/Common
       ${PROJECT_SOURCE_DIR}/IO
       ${PROJECT_SOURCE_DIR}/Simulink/Core
       ${PROJECT_SOURCE_DIR}/Simulink/Configuration
       ${PROJECT_SOURCE_DIR}/Documentation/Doxygen/Mainpages
       ${PROJECT_SOURCE_DIR}/README.md")

  configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in
                 ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)

  add_custom_target(Documentation
    COMMAND ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Generating ${PROJECT_NAME} API Documentation with Doxygen"
    VERBATIM)

  add_module(Utilities::Doxygen)

endif()

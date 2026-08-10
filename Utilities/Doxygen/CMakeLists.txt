if(SLXIO_DOXYGEN_DOCUMENTATION)

  set(DOXYGEN_BASE_DIR "${PROJECT_SOURCE_DIR}/Documentation/Doxygen")

  set(DOXYGEN_OUTPUT_DIR "${CMAKE_CURRENT_BINARY_DIR}")
  set(DOXYGEN_HTML_HEADER "${DOXYGEN_BASE_DIR}/Layouts/DoxygenHeaderLayout.html")
  set(DOXYGEN_LAYOUT_FILE "${DOXYGEN_BASE_DIR}/Layouts/DoxygenLayout.xml")
  set(PROJECT_LOGO_PATH "${DOXYGEN_BASE_DIR}/Assets/Icon.png")

  set(DOXYGEN_EXTRA_STYLESHEET "${DOXYGEN_BASE_DIR}/Stylesheets/doxygen-awesome-css/doxygen-awesome.css")
  set(DOXYGEN_HTML_FOOTER "")

  set(DOXYGEN_INPUT
    "${PROJECT_SOURCE_DIR}/Documentation ${PROJECT_SOURCE_DIR}/Common ${PROJECT_SOURCE_DIR}/IO ${PROJECT_SOURCE_DIR}/Simulink/Core ${PROJECT_SOURCE_DIR}/Simulink/Configuration ${DOXYGEN_BASE_DIR}/Mainpages ${PROJECT_SOURCE_DIR}/README.md"
  )

  configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in
                 ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)

  add_custom_target(Documentation
    COMMAND ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Generating ${PROJECT_NAME} API Documentation with Doxygen"
    VERBATIM)

  slx_add_module(Utilities::Doxygen)

endif()

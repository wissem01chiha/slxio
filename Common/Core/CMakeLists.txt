add_module(
  Core
  ValidationReport.cxx
  Version.cxx
  SimulinkVersion.cxx
  TimeStamp.cxx
  Timer.cxx
  Logger.cxx
  ErrorLogMessage.cxx
  FileLogger.cxx
  BackgroundLogger.cxx
  BufferedLogger.cxx
  BufferedErrorHandler.cxx
  IObservable.cxx
  HErrorHelper.cxx)

configure_file(Options.h.in ${CMAKE_CURRENT_BINARY_DIR}/Options.h @ONLY)
configure_file(VersionMacro.h.in ${CMAKE_CURRENT_BINARY_DIR}/VersionMacro.h
               @ONLY)
configure_file(SimulinkVersionMacro.h.in
               ${CMAKE_CURRENT_BINARY_DIR}/SimulinkVersionMacro.h @ONLY)
module_link_libraries(Core loguru spdlog)
set_target_properties(Core PROPERTIES OUTPUT_NAME "CommonCore")
target_precompile_headers(Core PRIVATE CommonPCH.h)
module_include_directories(
  Core ${PROJECT_THIRDPARTY_SOURCE_DIR}/doctest
  ${PROJECT_THIRDPARTY_SOURCE_DIR}/loguru
  ${PROJECT_THIRDPARTY_SOURCE_DIR}/spdlog)
add_subdirectory(Testing)

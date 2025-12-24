#[=======================================================================[.rst:
Install
-----------------
#]=======================================================================]


if(ENABLE_PKGCONFIG)
    set(PKGCONFIG_INSTALL_DIR lib/pkgconfig)

    install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/ DESTINATION ${PKGCONFIG_INSTALL_DIR}
        FILES_MATCHING PATTERN "slxio.pc")
    configure_file(
        ${CMAKE_CURRENT_SOURCE_DIR}/slxio.pc.in
        ${CMAKE_CURRENT_BINARY_DIR}/slxio.pc
        @ONLY
    )
endif()

if (CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
    set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}/install" CACHE PATH "Default install path" FORCE)
endif()

# if(TOP_LEVEL_BUILD)

#     install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/slxio DESTINATION include
#     FILES_MATCHING PATTERN "*.h" 
#     )

#     install(FILES ${CMAKE_BINARY_DIR}/Conf.h DESTINATION include/slxio)
#     install(FILES ${CMAKE_BINARY_DIR}/version.h DESTINATION include/slxio)

#     install(TARGETS zlib zip
#             EXPORT slxioTargets
#             ARCHIVE DESTINATION lib
#             LIBRARY DESTINATION lib
#             RUNTIME DESTINATION bin)

#     install(EXPORT slxioTargets
#             FILE slxioTargets.cmake
#             NAMESPACE slxio::
#             DESTINATION share/slxio)

#     include(CMakePackageConfigHelpers)

#     configure_package_config_file(
#         "${CMAKE_SOURCE_DIR}/cmake/SlxioConfig.cmake.in"
#         "${CMAKE_BINARY_DIR}/SlxioConfig.cmake"
#         INSTALL_DESTINATION share/slxio
#     )

#     write_basic_package_version_file(
#         "${CMAKE_BINARY_DIR}/SlxioConfigVersion.cmake"
#         VERSION ${PROJECT_VERSION}
#         COMPATIBILITY SameMajorVersion
#     )

#     install(FILES
#         "${CMAKE_BINARY_DIR}/SlxioConfig.cmake"
#         "${CMAKE_BINARY_DIR}/SlxioConfigVersion.cmake"
#         DESTINATION share/slxio)

#     install(FILES ${CMAKE_SOURCE_DIR}/LICENSE DESTINATION share/slxio)
    
#     install(FILES ${CMAKE_CURRENT_BINARY_DIR}/slxio.pc
#         DESTINATION lib/pkgconfig)
        
#     # ---[ CPack
#     set(CPACK_PACKAGE_NAME "slxio")
#     set(CPACK_PACKAGE_VERSION "0.1.0")
#     set(CPACK_PACKAGE_CONTACT "chihawissem08@gmail.com")  
#     set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Wissem Chiha")   
#     set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "SIMULINK® SLX File I/O Library")
#     set(CPACK_PACKAGE_VENDOR "Wissem Chiha")
#     set(CPACK_PACKAGE_INSTALL_DIRECTORY "slxio")
#     set(CPACK_DEBIAN_PACKAGE_DEPENDS "")  
#     set(CPACK_GENERATOR "DEB")

#     include(CPack)
# endif()

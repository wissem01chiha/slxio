#[=======================================================================[.rst:
ABINamespace
------------

#]=======================================================================]
include(CMakeDependentOption)
include(Version)

option(ENABLE_NAMESPACE "Enable global namespace" TRUE)
mark_as_advanced(ENABLE_NAMESPACE)

cmake_dependent_option(
  ENABLE_ABI_NAMESPACE
  "Enable ABI namespace" ON
  "ENABLE_NAMESPACE" OFF
)
mark_as_advanced(ENABLE_ABI_NAMESPACE)

if(ENABLE_NAMESPACE)

    set(NAMESPACE_NAME ${PROJECT_NAME})
    message(STATUS "using namespace: ${NAMESPACE_NAME}")
    set(NAMESPACE_BEGIN "namespace ${NAMESPACE_NAME} {")
    set(NAMESPACE_END   "}; // namespace ${NAMESPACE_NAME}")

    if(ENABLE_ABI_NAMESPACE)
        set(ABI_NAMESPACE_NAME 
        "v${VERSION_MAJOR}${VERSION_MINOR}${VERSION_PATCH}"
        )
        message(STATUS "using ABI namespace: ${ABI_NAMESPACE_NAME}")
        set(SLXIO_ABI_NAMESPACE_BEGIN "namespace ${ABI_NAMESPACE_NAME} {")
        set(SLXIO_ABI_NAMESPACE_END   "}; // namespace ${ABI_NAMESPACE_NAME}")
    endif()

endif()
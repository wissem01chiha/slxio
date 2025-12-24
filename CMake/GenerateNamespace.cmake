#[=======================================================================[.rst:
GenerateNamespace
-----------------

Define the project namespace and (optionally) the ABI namespace if enabled.

Sets the following definitions:

- ``NAMESPACE_BEGIN`` / ``NAMESPACE_END``  
  Project namespace.

- ``SLXIO_ABI_NAMESPACE_BEGIN`` / ``SLXIO_ABI_NAMESPACE_END``  
  ABI namespace when enabled.
#]=======================================================================]
include(Version)
include(CMakeDependentOption)

if(ENABLE_NAMESPACE)
    set(NAMESPACE_NAME ${PROJECT_NAME})
    set(NAMESPACE_BEGIN "namespace ${NAMESPACE_NAME} {")
    set(NAMESPACE_END   "}; // namespace ${NAMESPACE_NAME}")

    if(ENABLE_ABI_NAMESPACE)
        set(ABI_NAMESPACE_NAME 
        "v${PROJECT_VERSION_MAJOR}${PROJECT_VERSION_MINOR}${PROJECT_VERSION_PATCH}"
        )
        set(SLXIO_ABI_NAMESPACE_BEGIN "namespace ${ABI_NAMESPACE_NAME} {")
        set(SLXIO_ABI_NAMESPACE_END   "}; // namespace ${ABI_NAMESPACE_NAME}")
    endif()
endif()
#[=======================================================================[.rst:
# ModuleVendoring
-----------------
#]=======================================================================]

#[==[.rst:
.. cmake:function:: configure_vendored_module(<module_name>)

  A helper function to configure vendored or locally installed modules.

  .. code-block:: cmake

    configure_vendored_module(ZLIB)

#]==]
function(configure_vendored_module module_name)

    find_package(${module_name})
    if(${module_name}_FOUND)
        if(USE_LOCAL_LIBS)
            string(TOUPPER ${module_name} MODULE_NAME_UPPER)
            set(USE_EXTERNAL_${MODULE_NAME_UPPER} ON CACHE BOOL
                "Use external ${module_name} instead of vendored version")
        endif()
    endif()

endfunction()

include (Module)

#[==[.rst:
  helper to generate documentaion for a spec module based on enabled flag
  if at least on module will genrte documentaion and doxygen not valiabl
  invoke a fuction to install it
  this  fuction will add the trqured files of the module to a global var
  to feed it to doxygen to gete the docmetnion
  set the vars :
    DOC_MODULES - list of modules to gnerat to the document&ion to
#]==]
function (add_module_documentation module)

  if (${module}_ENABLE_DOCUMENTATION)
    list (APPEND DOC_MODULES ${module})
    set (
      DOC_MODULES
      ${DOC_MODULES}
      PARENT_SCOPE)
  endif ()

endfunction ()

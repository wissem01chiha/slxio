include (Module)

#[==[.rst:
.. : cmake_function::add_module_binding(<module>)

  if one module at least enable python binding,
    enable the global python binding support
    a flag to enable/disable extra depenacy for python binding for the module
    set the var :
      <module>_ENABLE_BINDING - to TRUE/FALSE
      by defult all the binding folder is placed by langauge spec under /Binding/<LANG>
      NOTE: if global binding enabled via ENABLE_BINDING and at leats one module
      has local BINDING build enabled -> thirdpart deps like pybind, JNI, .. are fetched and
      propagrted, global flags to be throwen are :

      ``PYTHON_BINDING``
      ``JAVA_BINDING``
      ``LUA_BINDING``
      ``WASM_BINDING``
      ``OCTAVE_BINDING``
#]==]
function (add_module_binding module)

endfunction ()

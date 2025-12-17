#[=======================================================================[.rst:
FindLoguru
-----------

Finds the Loguru logging library.

Usage
^^^^^

  find_package(Loguru REQUIRED)

Result Variables
^^^^^^^^^^^^^^^^

This module defines the following variables:

* ``Loguru_FOUND``  
  True if the Loguru header and source file were found.

* ``Loguru_INCLUDE_DIR``  
  The directory containing the Loguru header (`loguru.hpp`).

* ``Loguru_INCLUDE_DIRS``  
  Same as ``Loguru_INCLUDE_DIR``, provided for consistency.

* ``Loguru_SOURCE``  
  The path to the Loguru source file (`loguru.cpp`), if available.

* ``Loguru_VERSION``  
  Loguru Librray version installed 

Imported Targets
^^^^^^^^^^^^^^^^

If Loguru is found, the following imported target is available:

* ``Loguru::Loguru``  
  An INTERFACE target with include directories set appropriately.  
  If the `loguru.cpp` file is found, it is added as a source to the target.

Example
^^^^^^^

.. code-block:: cmake

   find_package(Loguru REQUIRED)
   add_executable(target main.cpp)
   target_link_libraries(target PRIVATE Loguru::Loguru)

#]=======================================================================]
include(FindPackageHandleStandardArgs)

find_path(Loguru_INCLUDE_DIR NAMES loguru.hpp)
find_file(Loguru_SOURCE NAMES loguru.cpp)

set(Loguru_INCLUDE_DIRS ${Loguru_INCLUDE_DIR})

find_package_handle_standard_args(Loguru
  REQUIRED_VARS Loguru_INCLUDE_DIR
  VERSION_VAR Loguru_VERSION)

if (Loguru_FOUND)
  if (NOT TARGET Loguru::Loguru)
    add_library(Loguru::Loguru INTERFACE IMPORTED)
    set_target_properties(Loguru::Loguru PROPERTIES
      INTERFACE_INCLUDE_DIRECTORIES "${Loguru_INCLUDE_DIR}")
    if (Loguru_SOURCE)
      set_property(TARGET Loguru::Loguru PROPERTY INTERFACE_SOURCES "${Loguru_SOURCE}")
    endif ()
  endif ()
endif ()

mark_as_advanced(Loguru_INCLUDE_DIR Loguru_SOURCE)

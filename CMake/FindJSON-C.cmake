# Based on :
# https://github.com/cloudshark/cshark/blob/master/build/modules/FindJSON-C.cmake
#[=======================================================================[.rst:
FindJSON-C
-----------

Finds the JSON-C library.

Usage
^^^^^

  find_package(JSON-C REQUIRED)

Result Variables
^^^^^^^^^^^^^^^^

This module defines the following variables:

* ``JSON-C_FOUND``
  True if the JSON-C library and headers were found.

* ``JSON-C_INCLUDE_DIR``
  The directory containing the JSON-C headers(e.g. ``json.h``).

* ``JSON-C_INCLUDE_DIRS``
  Same as ``JSON-C_INCLUDE_DIR``, provided for consistency.

* ``JSON-C_LIBRARY``
  The path to the JSON-C library.

* ``JSON-C_LIBRARIES``
  Same as ``JSON-C_LIBRARY``, provided for consistency.

Imported Targets
^^^^^^^^^^^^^^^^

If JSON-C is found, the following imported target is available:

* ``JSON-C::JSON-C``
  An IMPORTED target with include directories and libraries set appropriately.

Example
^^^^^^^

.. code-block:: cmake

   find_package(JSON-C REQUIRED)
   target_link_libraries(target PRIVATE JSON-C::JSON-C)

Notes
^^^^^

* This module uses ``pkg-config`` if available to help locate JSON-C.
* The search looks for headers such as ``json.h`` in common suffixes like
  ``json-c`` and ``json``.
* The library is typically named ``json-c`` or ``libjson-c``.
#]=======================================================================]

include(FindPackageHandleStandardArgs)

find_package(PkgConfig)
pkg_check_modules(PC_JSON-C QUIET json-c)

find_path(
  JSON-C_INCLUDE_DIR json.h
  HINTS ${PC_JSON-C_INCLUDEDIR} ${PC_JSON-C_INCLUDE_DIRS}
  PATH_SUFFIXES json-c json)

find_library(
  JSON-C_LIBRARY
  NAMES json-c libjson-c
  HINTS ${PC_JSON-C_LIBDIR} ${PC_JSON-C_LIBRARY_DIRS})

set(JSON-C_LIBRARIES ${JSON-C_LIBRARY})
set(JSON-C_INCLUDE_DIRS ${JSON-C_INCLUDE_DIR})

find_package_handle_standard_args(JSON-C DEFAULT_MSG
JSON-C_LIBRARY JSON-C_INCLUDE_DIR)

mark_as_advanced(JSON-C_INCLUDE_DIR JSON-C_LIBRARY)

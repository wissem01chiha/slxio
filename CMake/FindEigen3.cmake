#[=======================================================================[.rst:
FindEigen3
-----------

Finds the Eigen3 library.

Usage
^^^^^

To use this module, call:

  find_package(Eigen3 REQUIRED)

This will define the following variables:

  * ``Eigen3_FOUND``  
    True if the Eigen3 library was found.

  * ``Eigen3_INCLUDE_DIR``  
    The directory containing the Eigen3 headers.

  * ``Eigen3_INCLUDE_DIRS``  
    Same as ``Eigen3_INCLUDE_DIR``, provided for consistency.

  * ``Eigen3_VERSION``  
    The version string extracted from Eigen macros (WORLD.MAJOR.MINOR).

Imported Targets
^^^^^^^^^^^^^^^^

If Eigen3 is found, the following imported target is available:

  * ``Eigen3::Eigen3``  
    An INTERFACE target with the include directories set appropriately.

Example
^^^^^^^

.. code-block:: cmake

   find_package(Eigen3 REQUIRED)
   target_link_libraries(target PRIVATE Eigen3::Eigen3)

#]=======================================================================]
include(FindPackageHandleStandardArgs)

find_path(Eigen3_INCLUDE_DIR
  NAMES signature_of_eigen3_matrix_library
  PATH_SUFFIXES eigen3 eigen
  DOC "Eigen include directory")
mark_as_advanced(Eigen3_INCLUDE_DIR)

if (Eigen3_INCLUDE_DIR)
  file(STRINGS "${Eigen3_INCLUDE_DIR}/Eigen/src/Core/util/Macros.h" _Eigen3_version_lines
    REGEX "#define[ \t]+EIGEN_(WORLD|MAJOR|MINOR)_VERSION")
  string(REGEX REPLACE ".*EIGEN_WORLD_VERSION *\([0-9]*\).*" "\\1" _Eigen3_version_world "${_Eigen3_version_lines}")
  string(REGEX REPLACE ".*EIGEN_MAJOR_VERSION *\([0-9]*\).*" "\\1" _Eigen3_version_major "${_Eigen3_version_lines}")
  string(REGEX REPLACE ".*EIGEN_MINOR_VERSION *\([0-9]*\).*" "\\1" _Eigen3_version_minor "${_Eigen3_version_lines}")
  set(Eigen3_VERSION "${_Eigen3_version_world}.${_Eigen3_version_major}.${_Eigen3_version_minor}")
  unset(_Eigen3_version_world)
  unset(_Eigen3_version_major)
  unset(_Eigen3_version_minor)
  unset(_Eigen3_version_lines)
endif ()

find_package_handle_standard_args(Eigen3
  REQUIRED_VARS Eigen3_INCLUDE_DIR
  VERSION_VAR Eigen3_VERSION)

if (Eigen3_FOUND)
  set(Eigen3_INCLUDE_DIRS "${Eigen3_INCLUDE_DIR}")

  if (NOT TARGET Eigen3::Eigen3)
    add_library(Eigen3::Eigen3 INTERFACE IMPORTED)
    set_target_properties(Eigen3::Eigen3 PROPERTIES
      INTERFACE_INCLUDE_DIRECTORIES "${Eigen3_INCLUDE_DIR}")
  endif ()
endif ()

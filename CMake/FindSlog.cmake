#[=======================================================================[.rst:
FindSlog
-----------
Finds the Slog library :

.. code-block:: cmake

  find_package(Slog [<version>] [...])

Imported Targets
^^^^^^^^^^^^^^^^

This module provides the following :ref:`Imported Targets`:


Result Variables
^^^^^^^^^^^^^^^^

This module defines the following variables:

``Slog_FOUND``
``Slog_VERSION``
``Slog_INCLUDE_DIRS``
``Slog_LIBRARIES``

#]=======================================================================]
include (FindPackageHandleStandardArgs)

find_path (Slog_INCLUDE_DIR NAMES slog.h)
find_file (Slog_SOURCE NAMES slog.c)

set (Slog_INCLUDE_DIRS ${Slog_INCLUDE_DIR})

find_package_handle_standard_args (
  Slog
  REQUIRED_VARS Slog_INCLUDE_DIR
  VERSION_VAR Slog_VERSION)

if (Slog_FOUND)
  if (NOT TARGET Slog::Slog)
    add_library (Slog::Slog INTERFACE IMPORTED)
    set_target_properties (Slog::Slog PROPERTIES INTERFACE_INCLUDE_DIRECTORIES
                                                 "${Slog_INCLUDE_DIR}")
    if (Slog_SOURCE)
      set_property (TARGET Slog::Slog PROPERTY INTERFACE_SOURCES "${Slog_SOURCE}")
    endif ()
  endif ()
endif ()

mark_as_advanced (Slog_INCLUDE_DIR Slog_SOURCE)

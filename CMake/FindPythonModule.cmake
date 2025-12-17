#[=======================================================================[.rst:
FindPythonModule
----------------

#]=======================================================================]

message(STATUS "Checking if Python is available")
find_package (Python COMPONENTS Interpreter Development)
#here we will add mecasim for checking for a specif python module
# like find pythin module
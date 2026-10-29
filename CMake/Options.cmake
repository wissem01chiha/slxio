include(Macros)

# Option to enable/disable Global Link Time Optimisation note that this 
# might increase build time but produce more optimized binary,this feature
# required CMake >=v3.9, since we support min CMake v3.18 we are fine
advanced_option(SLXIO_ENABLE_LTO "Enable Link Time Optimization" OFF)

# Option to enable position-independent code globally, usful only when building 
# shared libraries or when a static library may later be linked into one.
advanced_option(SLXIO_ENABLE_PIC "Enable position-independent code" ON)

# Option to enable position-independent code for specific targets
# that require it, not globally.
advanced_option(SLXIO_ENABLE_TARGET_PIC "Enable pic for specific targets" OFF)

# Build  static and shared library as well, this is disabled by default, 
advanced_option(SLXIO_BUILD_SHARED_AND_STATIC_LIBS "Build both shared and 
static libraries" OFF)

# for fine grained control when building only shared or static libraries, 
# this can be enabled for shared builds
# note this option is relevant when BUILD_SHARED_AND_STATIC_LIBS is disabled
advanced_option(SLXIO_BUILD_SHARED_LIBS "Build shared libraries" OFF)

# for building only static libraries, when BUILD_SHARED_AND_STATIC_LIBS 
# is disabled
advanced_option(SLXIO_BUILD_STATIC_LIBS "Build static libraries" OFF)

# Enable unit and integration testing globally
option(SLXIO_BUILD_TESTS "Enable unit and integration testing" OFF)

# When global testing option is disbaled, this gives fine grained 
# control to build only unit tests separately
advanced_option(SLXIO_BUILD_UNIT_TESTS "Enable building unit tests" OFF)

# same as SLXIO_BUILD_UNIT_TESTS but for integration tests
advanced_option(SLXIO_BUILD_INTEGRATION_TESTS "Enable building integration
 tests" OFF)

# Enable coverage reports when SLXIO_BUILD_TESTS or SLXIO_BUILD_UNIT_TESTS or 
# SLXIO_BUILD_INTEGRATION_TESTS is enabled
cmake_dependent_option(SLXIO_ENABLE_COVERAGE "Enable code coverage for Libraries
 and Programs" OFF "SLXIO_BUILD_TESTS" OFF)

# Option to control building of fuzzy tests module sources, this is sperate 
# from SLXIO_BUILD_TESTS option, so fuzzy pipiles can be built independently
# and save build time.
advanced_option(SLXIO_BUILD_FUZZER "Enable build fuzzy tests" OFF)

# Option to enable building example scripts
option(SLXIO_BUILD_EXAMPLES "Enable building examples scripts" OFF)

# Option to control installation of example scripts, 
# this will only be relevant if example scripts are being built and global installtion 
# option is enabled
cmake_dependent_option(SLXIO_INSTALL_EXAMPLES "Install example scripts"
 OFF "SLXIO_BUILD_EXAMPLES" OFF)

# Option to enable building Auxiliary modules 
advanced_option(SLXIO_BUILD_AUXILIARY "Enable building Auxiliary modules" ON)

# Option to enable Python bindings interface, only when SLXIO_BUILD_AUXILIARY is 
# set to ON
advanced_dependent_option(SLXIO_BUILD_PYTHON "Build Python interface" OFF
 "SLXIO_BUILD_AUXILIARY" OFF)

# Option to enable Java bindings
advanced_dependent_option(SLXIO_BUILD_JAVA "Build Java interface" OFF
 "SLXIO_BUILD_AUXILIARY" OFF)

advanced_dependent_option(SLXIO_ENABLE_JNI 
"Force JNI implementation instead of FFM for Java bindings when Java 25+ is 
available" ON "SLXIO_BUILD_JAVA" OFF)

advanced_dependent_option(SLXIO_BUILD_CONSOLE "Enable building command line
 interface" OFF "SLXIO_BUILD_AUXILIARY" OFF)

# enable all sanitizers globally when available when compiler and platform 
# support them
advanced_option(SLXIO_ENABLE_SANITIZERS "Enable all available sanitizers" OFF)

# Asan
advanced_dependent_option(SLXIO_ENABLE_ASAN "Enable AddressSanitizer" OFF
 SLXIO_ENABLE_SANITIZERS ON)

# MSan 
advanced_dependent_option(SLXIO_ENABLE_MSAN "Enable MemorySanitizer" OFF
 SLXIO_ENABLE_SANITIZERS ON)

# TSan
advanced_dependent_option(SLXIO_ENABLE_TSAN "Enable ThreadSanitizer" OFF
 SLXIO_ENABLE_SANITIZERS ON)

# Ubsan
advanced_dependent_option(SLXIO_ENABLE_UBSAN "Enable UndefinedBehaviorSanitizer" OFF
 SLXIO_ENABLE_SANITIZERS ON)

# Option to enable/disable IO modules support  globally
advanced_option(SLXIO_ENABLE_IO "build IO modules" OFF)

# Option to enable *.sldd file support
advanced_dependent_option(SLXIO_ENABLE_SLDD "simulink data dictionary support" ON
 "SLXIO_ENABLE_IO" OFF)

# Option to enable *.mat file support
advanced_dependent_option(SLXIO_ENABLE_MAT "MATLAB MAT file support" OFF
 "SLXIO_ENABLE_IO" OFF)

# Option to enable support for *.mdl files
# Note that *.mdl files are experimental and may be unstable
advanced_dependent_option(SLXIO_ENABLE_LEGACY_MDL "legacy simulink model files
 support" OFF "SLXIO_ENABLE_IO" OFF)

# Build with HDF5 library support
# Enables internal HDF5 exporter and MAT files with HDF5 via MATIO_WITH_HDF5
advanced_option(SLXIO_ENABLE_HDF5 "Check for hdf5 library" ON)

# By default it will look for any installed simulink instances
# If found, will set the target simulink version automatically to match
# Else can be forced to one of the supported releases
advanced_option(SLXIO_AUTO_DETECT_SIMULINK 
"Automatically detect installed simulink versions" ON)

# Option so the user specifies a specific simulink version to use when 
# SLXIO_AUTO_DETECT_SIMULINK is OFF, note that only one simulink version
# can be is supported at a time
advanced_dependent_option(SLXIO_SIMULINK_DEFAULT_VERSION 
"simulink version to use" R2018b SLXIO_AUTO_DETECT_SIMULINK)

# Option to enable installation rules on target machine
advanced_option(SLXIO_INSTALL "installation after build" ON)

# Choose whatever to install vendored lisenses when SLXIO_INSTALL is ON
# this option will install project license along with third-party ones
advanced_dependent_option(SLXIO_INSTALL_LICENSES "install third-party licenses" 
ON SLXIO_INSTALL)

# Option to install software licenses, requires SLXIO_INSTALL enabled
advanced_option(CMAKE_INSTALL_LICENSEDIR "install license directory" OFF)

# Default license installation directory
advanced_option(CMAKE_DEFAULT_LICENSEDIR "default license installation
 directory" ${CMAKE_INSTALL_DATAROOTDIR}/Licenses/${CMAKE_PROJECT_NAME} OFF)

# if CMAKE_INSTALL_LICENSEDIR not set fallback to this default
if(NOT CMAKE_INSTALL_LICENSEDIR)
 set(CMAKE_INSTALL_LICENSEDIR "${CMAKE_DEFAULT_LICENSEDIR}")
endif ()

# Generate .pc file from template during build if pkgconfig was found on
# host machine
# Requires Pkg-Config installed, see https://people.freedesktop.org/~dbn/pkg-config-guide.html
advanced_option(SLXIO_ENABLE_PKGCONFIG "generate pkg-config files" ON)

# Option to enable/disable build summary logging during 
# cmake configuration step
advanced_option(SLXIO_BUILD_SUMMARY "display build summary" ON)

# When this is on custom targets mainly for tooling will be build
advanced_option(SLXIO_CUSTOM_TARGETS)

# Override default build type
option(SLXIO_DEFAULT_BUILD_TYPE "default build type" Release)

# Option to set build type when user didn't specify for single generators
if(NOT DEFINED CMAKE_BUILD_TYPE AND NOT IS_MULTI)
  set(CMAKE_BUILD_TYPE ${SLXIO_DEFAULT_BUILD_TYPE})
endif()

# Change this variable to add a prefix before each cmake target compiled
set(CMAKE_BINARY_NAME_PREFIX "Slx")

# strict warning to error option
advanced_option(SLXIO_ENABLE_WERROR "treat warnings as errors" OFF)

# display all compiler warning for debugging
advanced_option(SLXIO_ENABLE_WALL "Enable all compiler warnings" ON)




































# Option to generate API HTML documentation
# Requires Doxygen installed, else throws a build error
advanced_option(SLXIO_DOXYGEN_DOCUMENTATION "Enable Doxygen documentation generation" OFF)



# Option to use OpenMP acceleration when available
advanced_option(SLXIO_ENABLE_OPENMP "openmp support" ON)










# Option to enable using std::uint64_t types
# If the platform/compiler does not support 64-bit this throws an error
configure_option(SLXIO_64BIT_IDENTIFIERS "Enable 64-bit identifiers" ON)



































# by daulfault we vendor all third party of the project, and are by default used othersie a configuration specified
# Option to use only vendored third_party modules
advanced_option(SLXIO_USE_SYSTEM_MODULES "Use system-wide installed modules" OFF)

# Use system-wide installed modules when found
advanced_option(SLXIO_USE_SYSTEM_MODULES "Use system-wide installed modules" OFF)

# Vendored third_parties are built by other targets
advanced_option(SLXIO_DISABLE_VENDORED_MODULES "Disable vendored third_party modules" OFF)

# Option to install vendored third_party modules licenses
advanced_option(SLXIO_INSTALL_THIRDPARTY_LISENCES "Install vendored third_party modules licenses" ON)

# Option to enable building third party module tests for regression
# Requires SLXIO_BUILD_TESTING enabled
advanced_option(SLXIO_BUILD_THIRDPARTY_TESTING "Enable building third party module tests for regression" OFF)

# Option to enable building third party module extra tools or scripts
advanced_option(SLXIO_BUILD_THIRDPARTY_TOOLS "Enable building third party module extra tools or scripts" OFF)



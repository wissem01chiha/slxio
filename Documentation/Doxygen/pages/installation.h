/**
 * @page installation Installation
 *
 * @tableofcontents
 *
 * @section build_section  Building from Source
 *
 * This section describes how to build SLXIO.
 * See [2.1 Dependencies](#dependencies_section) for details.
 *
 * ---
 *
 * @subsection dependencies_section  Dependencies
 *
 * SLXIO dependencies are fetched automatically during build time.If not found,
 * they will be built from the bundled files included with the project. For
 * external dependencies, SLXIO uses
 * [CPM](https://github.com/cpm-cmake/CPM.cmake) to fetch and install them. Note
 * that developer tools may require additional dependencies. For more
 * information, refer to [Developer Notes](#developer_notes).
 *
 * **External Dependencies:**
 * - [slog](https://github.com/kala13x/slog)
 * - [json-c](https://github.com/json-c/json-c)
 * - [zlib](https://github.com/madler/zlib)
 * - [libzip](https://github.com/nih-at/libzip)
 * - [libxml2](https://gitlab.gnome.org/GNOME/libxml2)
 * - [HDF5](https://github.com/HDFGroup/hdf5) *(optional)*
 * - [cxxopts](https://github.com/jarro2783/cxxopts) *(optional)*
 * - [googletest]() *(optional)*
 *
 * ---
 *
 * @subsection build_slxio_section  Building SLXIO
 *
 * @subsubsection quick_build Quick Build Guide
 *
 * @code{.sh}
 * mkdir build && cd build
 * cmake -G "MinGW Makefiles" ..
 * cmake --build .
 * cmake --install .
 * @endcode
 *
 * @subsubsection config_options Build Configuration Options
 *
 * | Option                        | Description | Default |
 * |------------------------------|-------------------------------------------------------------------|---------|
 * | SLXIO_OPENMP                 | Enable compiling with OpenMP support | TRUE
 * | | SLXIO_HDF5                   | Enable HDF5 support | FALSE   | |
 * SLXIO_BUILD_TESTS            | Enable building C++ unit tests | FALSE   | |
 * SLXIO_BUILD_DOCS             | Enable documentation generation | FALSE   | |
 * SLXIO_BUILD_EXAMPLES         | Enable building example programs | FALSE   |
 * | SLXIO_JSON                   | Enable building C++ tool scripts with JSON
 * support                | FALSE   | | SLXIO_SIMPLE_BUILD           | Build the
 * project as minimally as possible                        | FALSE   | |
 * SLXIO_ONLY_COVERAGE          | Build only tests necessary for coverage |
 * FALSE   | | SLXIO_LIBCPP                 | Build with libc++ | FALSE   | |
 * SLXIO_ENABLE_COVERAGE        | Enable coverage reporting for GCC/Clang |
 * FALSE   | | SLXIO_ENABLE_ASAN            | Enable address sanitizer | FALSE |
 * | SLXIO_BUILD_SHARED_LIBS      | Enable compilation of shared libraries |
 * FALSE   | | SLXIO_ENABLE_CLANG_TIDY      | Enable static analysis with
 * clang-tidy                            | FALSE   | | SLXIO_ENABLE_CPPCHECK |
 * Enable static analysis with cppcheck                              | FALSE   |
 * | SLXIO_FORCE_COLORED_OUTPUT   | Always produce ANSI-colored output
 * (GNU/Clang only)               | TRUE    | | SLXIO_DEBUG_LOGGING          |
 * Enable debug logging                                              | TRUE    |
 * | CMAKE_INSTALL_PREFIX         | Default install path |
 * `${CMAKE_BINARY_DIR}/install` |
 *
 * ---
 *
 * @subsection platforms_section  Platforms
 *
 * *(Add platform-specific notes here if needed.)*
 */
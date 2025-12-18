
#include "developers.h"
#include "installation.h"
#include "usage.h"

namespace slxio {

/**
 * @mainpage
 * <h3>Overview</h3>
 *
 * SLXIO is an open-source C++17 library for reading and writing
 * [Simulink](https://www.mathworks.com/products/simulink.html) `.slx` model
 * files.
 *
 * This library is designed for use in projects that either lack access to
 * MATLAB's libraries or prefer not to rely on them. It was originally derived
 * from the Java-based Simulink parser of the ConQAT Project.
 *
 * The project is actively under development, and contributions are very
 * welcome. See the @ref developers_guide "Developer Guide" page for more
 * information.
 *
 * To install the prebuilt binary of the library, refer to the
 * @ref SupportedMATLABVersion "Supported MATLAB Version" page and check out the
 * latest release from the @ref changelog "Changelog" page.
 *
 * Examples and tutorials are hosted with the project and can be found on the
 * @ref examples "Examples" page, along with their source code.
 *
 * For a detailed list of features and their support status, see the
 * @ref feature "Feature Overview" page.
 *
 * This project is still in an experimental phase. It is not yet ready for
 * production use, and no stable release has been published.
 *
 * ---
 *  <h4>Documentation Pages</h4>
 * - @subpage installation
 * - @subpage changelog
 * - @subpage usage
 * - @subpage examples
 * - @subpage developers_guide
 * - @subpage Matlab_support
 */

/**
 * @defgroup core Core Functionality
 * @brief Core modules and logic
 */

/**
 * @defgroup utils Utilities
 * @brief Helper functions and tools
 * @ingroup core
 */

/**
 * @page changelog Changelog
 *
 * All notable changes to this project will be documented in this file.
 * See
 * [standard-version](https://github.com/conventional-changelog/standard-version)
 * for commit guidelines.
 *
 * ---
 *
 * @section v1_1_0 Version 1.1.0 (2022-02-17)
 * [Compare
 * v1.0.1...v1.1.0](https://github.com/mokkapps/changelog-generator-demo/compare/v1.0.1...v1.1.0)
 *
 * @subsection v1_1_0_features Features
 * - Add multiple subdirs support
 *   [aadaf1b](https://github.com/mokkapps/changelog-generator-demo/commits/aadaf1b23ae4358471f51ddee20701bb6ee05973)
 * - Add support for subdirectories in src
 *   [dc840a2](https://github.com/mokkapps/changelog-generator-demo/commits/dc840a200e287dcf4d5218148ee6a7a72ac696dd)
 * - Add test-support
 *   [cad094e](https://github.com/mokkapps/changelog-generator-demo/commits/cad094ee77fc1aebcd1de8f3acd2f12d9de71878)
 *
 * @subsection v1_1_0_fixes Bug Fixes
 * - Makefile rule
 *   [c63ace0](https://github.com/mokkapps/changelog-generator-demo/commits/c63ace0514bde260a206d2c2eeb8a68df594aae4)
 *
 * ---
 *
 * @section v1_0_1 Version 1.0.1 (2021-04-16)
 * [Compare
 * v1.0.0...v1.0.1](https://github.com/mokkapps/changelog-generator-demo/compare/v1.0.0...v1.0.1)
 *
 * @subsection v1_0_1_fixes Bug Fixes
 * - Ignore VSCode logs
 *   [82cc6ce](https://github.com/mokkapps/changelog-generator-demo/commits/82cc6ce69c59a0899434472e0f389d65ed8c89b9)
 *
 * ---
 *
 * @section v1_0_0 Version 1.0.0 (2025-09-16)
 *
 * @subsection v1_0_0_features Features
 * - Initial commit
 *   [ed65db3](https://github.com/mokkapps/changelog-generator-demo/commits/ed65db3ef825dd160a79ea36657f5af3d7300cfc)
 */

/**
 *
 * @page  Matlab_support MATLAB
 *
 * this page list all MATLAb support version for Writing /Reading SLX files
 * at the moment the only supported versions are mATLAB R2019a and R2022b
 *
 */

/**
 * @page examples Examples
 *
 * This page provides practical examples of how to use SLXIO in your own
 * projects.
 *
 * - @subpage load
 *
 * ---
 *
 * @subsection integrate_section 3.1 Integrate in Other Projects
 *
 * *(Add integration instructions or code snippets here if needed.)*
 *
 * ---
 *
 * @subsection read_slx_section 3.2 Reading an SLX File
 *
 * The following example demonstrates how to read an SLX file using SLXIO:
 *
 * @code{.cpp}
 * #include "SLXIO.h"
 *
 * int main() {
 *     slxio::SLXModel model = slxio::read("example_model.slx");
 *
 *     std::cout << "Version: " << model.version() << std::endl;
 *     std::cout << "Name: " << model.name() << std::endl;
 *
 *     for (const auto& block : model.blocks()) {
 *         std::cout << block.name() << " [" << block.type() << "] at "
 *                   << block.position().x() << "," << block.position().y() <<
 * std::endl;
 *     }
 *
 *     for (const auto& chart : model.stateflow().charts()) {
 *         std::cout << "Chart: " << chart.name() << std::endl;
 *         for (const auto& t : chart.transitions()) {
 *             std::cout << "  " << t.source() << " -> " << t.target()
 *                       << " if \"" << t.condition() << "\"" << std::endl;
 *         }
 *     }
 *
 *     return 0;
 * }
 * @endcode
 *
 * ---
 *
 * @subsection write_slx_section 3.3 Writing an SLX File
 *
 * *(Add example code for writing an SLX file here.)*
 */

}; // namespace slxio
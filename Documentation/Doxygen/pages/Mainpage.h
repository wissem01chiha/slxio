/**
 * @mainpage
 * 
 * <p align="center">
 * <a href="https://github.com/wissem01chiha/slxio/actions/workflows/windows.yml">
 *   <img src="https://github.com/wissem01chiha/slxio/actions/workflows/windows.yml/badge.svg" alt="Windows Build Status"/>
 * </a>
 * <a href="https://github.com/wissem01chiha/slxio/actions/workflows/ubuntu.yml">
 *   <img src="https://github.com/wissem01chiha/slxio/actions/workflows/ubuntu.yml/badge.svg" alt="Ubuntu Build Status"/>
 * </a>
 * <a href="https://github.com/wissem01chiha/slxio/actions/workflows/mingw.yml">
 *   <img src="https://github.com/wissem01chiha/slxio/actions/workflows/mingw.yml/badge.svg" alt="MinGW Build Status"/>
 * </a>
 * <a href="https://github.com/wissem01chiha/slxio/actions/workflows/macos.yml">
 *   <img src="https://github.com/wissem01chiha/slxio/actions/workflows/macos.yml/badge.svg" alt="MacOS Build Status"/>
 * </a>
 * <a href="https://github.com/wissem01chiha/slxio/actions/workflows/codeql.yml">
 *   <img src="https://github.com/wissem01chiha/slxio/actions/workflows/codeql.yml/badge.svg" alt="CodeQL Status"/>
 * </a>
 * <a href="https://github.com/wissem01chiha/slxio/actions/workflows/doc.yml">
 *   <img src="https://github.com/wissem01chiha/slxio/actions/workflows/doc.yml/badge.svg" alt="Doc Status"/>
 * </a>
 * <a href="https://github.com/wissem01chiha/slxio/actions/workflows/release.yml">
 *   <img src="https://github.com/wissem01chiha/slxio/actions/workflows/release.yml/badge.svg" alt="Release Status"/>
 * </a>
 * </p>
 *
 * <h3>Overview</h3>
 *
 * slxio is an open-source C++11 library for reading and writing
 * [Simulink](https://www.mathworks.com/products/simulink.html) `.slx` model
 * files.
 *
 * This library is designed for use in projects that either lack access to
 * MATLAB's libraries/runtime or prefer not to rely on them, as well as in
 * automation workflows. It aims to provide a lightweight alternative for
 * manipulating Simulink models using modern scripting languages such as
 * Python, Lua, etc., via C++ bindings.
 *
 * The project was originally derived from the Java-based Simulink parser of
 * the ConQAT Project. Find the original source code here:
 * [link](https://github.com/harmanpa/SimulinkLibraryForJava).
 * It has since been ported to C++ and refactored into a highly modular
 * architecture.
 *
 * slxio does not aim to support all Simulink features, but rather focuses on
 * the most commonly used ones. The library provides a simple and intuitive API
 * for accessing and modifying Simulink model components such as blocks, lines,
 * parameters, and Stateflow charts, via a mimic of the MATLAB Simulink API.
 * This makes it easy for users familiar with MATLAB to get started.
 *
 * The project is actively under development, and contributions are very
 * welcome. See the @ref developers_guide "Developer Guide" page for more
 * information.
 *
 * To install the prebuilt binary of the library, refer to the
 * @ref installation "Installation" page and check out the latest release from
 * the official GitHub release [page](https://github.com/wissem01chiha/slxio/releases).
 * For building the library from source, see the same page for detailed
 * instructions.
 *
 * Examples and tutorials for beginners are hosted with the project and can be
 * found on the @ref Tutorials "Tutorials" page, along with their source code.
 * Many of the features are not yet implemented or tested. For a detailed list
 * of features and their support status, see the @ref feature "Feature Overview"
 * page.
 *
 * This project is still in an experimental phase. It is not yet ready for
 * production use, and no stable release has been published.
 *
 * ---
 * <h4>Documentation Pages</h4>
 * - @subpage installation
 * - @subpage changelog
 * - @subpage usage
 * - @subpage Tutorials
 * - @subpage developers_guide
 * - @subpage Matlab_support
 */

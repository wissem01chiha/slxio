/**

@mainpage Documentation

@image html main_logo.png

@author Wissem Chiha

@date March 24, 2026

Slxio is an open‑source C++11 library for reading, writing, visualizing, and exporting [Simulink](https://www.mathworks.com/products/simulink.html) `.slx` model files.
The project is designed as a lightweight alternative to MATLAB’s proprietary libraries and runtime, similar in spirit to the [matio](https://github.com/tbeu/matio) library for `.mat` files. Its goal is to make Simulink models accessible outside the MATLAB ecosystem, enabling manipulation and integration through modern scripting languages such as Python, Java, and others via C++ bindings.
The project was originally derived from the Java-based Simulink parser of the [ConQAT](https://en.wikipedia.org/wiki/ConQAT) Project. Find the original source code here   [SimulinkLibraryForJava](https://github.com/harmanpa/SimulinkLibraryForJava). It has since been ported to C++ and refactored into a highly modular architecture.
Slxio does not aim to support all Simulink features, but rather focuses on the most commonly used ones. The library provides a simple and intuitive API for accessing and modifying Simulink model components such as blocks, lines, parameters, and Stateflow charts, via a mimic of the MATLAB Simulink API. This makes it easy for users familiar with MATLAB to get started.
To install the prebuilt binary of the library, refer to the [Installation](#20-building) section and check out the latest release from the official GitHub release [page](https://github.com/wissem01chiha/slxio/releases),for building the library from source, see the same page for detailed instructions.
Examples and tutorials for beginners are hosted with the project and can be found on the [Tutorials](Tutorials) page, along with their source code. Many of the features are not yet implemented or tested. For a detailed list of features and their support status, see the [feature](#11-features) section.
The project is under active development, and contributions are highly encouraged. See the [Contributing](.github/CONTRIBUTING.md) guide for basics on Git, CMake, C++, and workflow, and the [Development](/Development/README.md) guide for quick-start instructions and advanced details.


@section manual_user User Manual

@li @subpage page_introduction Introduction
@li @subpage page_topics Topics
@li @subpage page_libs Libraries
@li @subpage page_class_categories Class Categories

@section manual_misc Other Information

@li @subpage page_samples Samples
@li @subpage page_utils Utilities
@li @subpage page_translations Translations
@li @subpage page_multiplatform Multiplatform
@li @subpage page_copyright Copyright

**/

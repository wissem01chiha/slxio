---
title: Home
layout: home
nav_order: 1
description: "SLXIO – SIMULINK SLX File I/O Library"
---

# Welcome to SLXIO !
{: .fs-9 }

SLXIO – SIMULINK SLX File I/O Library

[Get started now](#getting-started){: .btn .btn-primary .fs-5 .mb-4 .mb-md-0 .mr-2 }
[View it on GitHub][slxio repo]{: .btn .fs-5 .mb-4 .mb-md-0 }


> This project is still in an experimental phase. It is not yet ready for production use, and no stable release has been published.


## Overview

SLXIO is an open‑source C++14 library for reading, writing, visualizing, and exporting [Simulink](https://www.mathworks.com/products/simulink.html) `.slx` model files.

The project is designed as a lightweight alternative to MATLAB’s proprietary libraries and runtime, similar in spirit to the [matio](https://github.com/tbeu/matio) library for `.mat` files. Its goal is to make Simulink models accessible outside the MATLAB ecosystem, enabling manipulation and integration through modern scripting languages such as Python, Java, and others via C++ bindings.

The project was originally derived from the Java-based Simulink parser of the [ConQAT](https://en.wikipedia.org/wiki/ConQAT) Project. Find the original source code here   [SimulinkLibraryForJava](https://github.com/harmanpa/SimulinkLibraryForJava). It has since been ported to C++ and refactored into a highly modular architecture.

SLXIO does not aim to support all Simulink features, but rather focuses on the most commonly used ones. The library provides a simple and intuitive API for accessing and modifying Simulink model components such as blocks, lines, parameters, and Stateflow charts, via a mimic of the MATLAB Simulink API. This makes it easy for users familiar with MATLAB to get started.

To install the prebuilt binary of the library, refer to the [Installation](#20-building) section and check out the latest release from the official GitHub release [page](https://github.com/wissem01chiha/slxio/releases),for building the library from source, see the same page for detailed instructions.

Examples and tutorials for beginners are hosted with the project and can be found on the [Tutorials](Tutorials) page, along with their source code. Many of the features are not yet implemented or tested. For a detailed list of features and their support status, see the [feature](#11-features) section.

The project is under active development, and contributions are highly encouraged. See the [Contributing](.github/CONTRIBUTING.md) guide for basics on Git, CMake, C++, and workflow, and the [Development](/Development/README.md) guide for quick-start instructions and advanced details.


# Getting-Started

# Features

- Read [Simulink](https://www.mathworks.com/products/simulink.html) internal block‑diagram files into native C++ data structures.
- Export model hierarchies into [JSON](https://www.json.org/json-en.html), [HDF5](https://www.hdfgroup.org/solutions/hdf5/), or [Graphviz](https://graphviz.org/)‑compatible formats.
- Edit metadata and parameters, then save changes back into `.slx` files. This feature may be delayed because Simulink files follow the [Opc Convention]() and the archive layout changes between versions. We currently maintain the [libopc](https://github.com/wissem01chiha/libopc) project to provide a portable, cross‑version abstraction for editing.
- Perform static analysis on Simulink models and generate reports in [PDF](https://en.wikipedia.org/wiki/PDF) or [HTML](https://www.geeksforgeeks.org/html/html-web-page-format/).
- Visualize Simulink models interactively. For now, only the [Qt](https://www.qt.io/) backend is supported. Other 2D graphing engines or tools are open for discussion — please feel free to start one [here](https://github.com/wissem01chiha/slxio/discussions).

# Contact

Feel free to  contact the maintainer through email at [mail](mailto:chihawissem08@gmail.com)

# Contributing

If you are interested in collaborating, please see the [CONTRIBUTING](CONTRIBUTING.md) guide or contact the maintainer via email (see section [1.2](#12-contact)).
Due to time constraints, responses and pull request reviews may be delayed. Thank you for your understanding.

## 7.0 References

> Shrestha, S. L., Chowdhury, S. A., & Csallner, C. (2022).
> *SLNET: A Redistributable Corpus of 3rd-party Simulink Models (v2.0)*.
> Zenodo. https://doi.org/10.5281/zenodo.5259648


## 8.0 License

All material is provided under an Apache License unless otherwise specified.
see the [`LICENSE`](./LICENSE) file for more details


[slxio repo]: https://github.com/wissem01chiha/slxio
# SLXIO

SLXIO – SIMULINK SLX File I/O Library

## Status

[![Windows](https://github.com/wissem01chiha/SLXIO/actions/workflows/windows.yml/badge.svg?branch=master)](https://github.com/wissem01chiha/SLXIO/actions/workflows/windows.yml)
[![MinGW](https://github.com/wissem01chiha/SLXIO/actions/workflows/mingw.yml/badge.svg)](https://github.com/wissem01chiha/SLXIO/actions/workflows/mingw.yml)
[![Ubuntu](https://github.com/wissem01chiha/SLXIO/actions/workflows/ubuntu.yml/badge.svg)](https://github.com/wissem01chiha/SLXIO/actions/workflows/ubuntu.yml)
[![MacOS](https://github.com/wissem01chiha/SLXIO/actions/workflows/macos.yml/badge.svg)](https://github.com/wissem01chiha/SLXIO/actions/workflows/macos.yml)
[![Documentation](https://github.com/wissem01chiha/SLXIO/actions/workflows/documentation.yml/badge.svg)](https://github.com/wissem01chiha/SLXIO/actions/workflows/documentation.yml)
[![CodeQL](https://github.com/wissem01chiha/SLXIO/actions/workflows/codeql.yml/badge.svg)](https://github.com/wissem01chiha/SLXIO/actions/workflows/codeql.yml)
[![Build status](https://ci.appveyor.com/api/projects/status/40jlbucsjjxehn76?svg=true)](https://ci.appveyor.com/project/wissem01chiha/SLXIO)
[![Sanitizer](https://github.com/wissem01chiha/SLXIO/actions/workflows/sanitizer.yml/badge.svg?branch=develop)](https://github.com/wissem01chiha/SLXIO/actions/workflows/sanitizer.yml)
![GitHub License](https://img.shields.io/github/license/wissem01chiha/SLXIO)
[![Release](https://github.com/wissem01chiha/SLXIO/actions/workflows/release.yml/badge.svg)](https://github.com/wissem01chiha/SLXIO/actions/workflows/release.yml)
[![codecov](https://codecov.io/gh/wissem01chiha/SLXIO/graph/badge.svg?token=EBZSHLWF78)](https://codecov.io/gh/wissem01chiha/SLXIO)
[![CodeFactor](https://www.codefactor.io/repository/github/wissem01chiha/SLXIO/badge/master)](https://www.codefactor.io/repository/github/wissem01chiha/SLXIO/overview/master)
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/e91d3a5f2f39464bb6dcf2d6b582541b)](https://app.codacy.com/gh/wissem01chiha/slxio/dashboard?utm_source=gh&utm_medium=referral&utm_content=&utm_campaign=Badge_grade)
[![pre-commit.ci status](https://results.pre-commit.ci/badge/github/wissem01chiha/SLXIO/master.svg)](https://results.pre-commit.ci/latest/github/wissem01chiha/SLXIO/master)
[![SonarQube](https://github.com/wissem01chiha/slxio/actions/workflows/sonar-qube.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/sonar-qube.yml)
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=wissem01chiha_slxio&metric=bugs)](https://sonarcloud.io/summary/new_code?id=wissem01chiha_slxio)
[![Quality gate status](https://sonarcloud.io/api/project_badges/measure?project=wissem01chiha_slxio&metric=alert_status)](https://sonarcloud.io/summary/new_code?id=wissem01chiha_slxio)

## Overview

Slxio is an open‑source C++14 library for reading, writing, visualizing, and exporting [Simulink®](https://www.mathworks.com/products/simulink.html) `.slx` model files.

The project is designed as a lightweight alternative to [MATLAB®](https://www.mathworks.com/help/matlab/index.html) proprietary libraries and runtime, similar in spirit to the [MATIO](https://github.com/tbeu/matio) library for `.mat` files. Its goal is to make Simulink models accessible outside the MATLAB ecosystem, enabling manipulation and integration through modern scripting languages such as Python, Java, and others via C++ bindings. It was originally derived from the Java-based Simulink parser of the [ConQAT](https://en.wikipedia.org/wiki/ConQAT) Project. Find the original source code here   [SimulinkLibraryForJava](https://github.com/harmanpa/SimulinkLibraryForJava), ported to C++ and refactored into a highly modular architecture.

Slxio does not aim to support all Simulink® features, but rather focuses on the most commonly used ones. The library provides a simple and intuitive api for accessing and modifying Simulink® model components such as blocks, lines, parameters, and Stateflow charts, via a mimic of the MATLAB Simulink® API. This makes it easy for users familiar with MATLAB to get started, and reduce the effort when migrating Matlab based scripts into Slxio
based ones.

## Key features

- Access  [Simulink®](https://www.mathworks.com/products/simulink.html) models outside [MATLAB®](https://www.mathworks.com/help/matlab/index.html) Read `.slx` block‑diagram files into native C++ structures.
- Export models in scientific formats  Support [HDF5](https://www.hdfgroup.org/solutions/hdf5/), [NetCDF](https://www.unidata.ucar.edu/software/netcdf), and similar standards for use in research, simulation, and data analysis pipelines.
- Export models in visualization formats Provide [Json](https://www.json.org/json-en.html), [Mermaid](https://mermaid.live/), [Drawio](https://www.drawio.com/), and [Graphviz](https://graphviz.org/) outputs for integration with visualization tools and lightweight sharing.
- Modify block diagrams without [MATLAB®](https://www.mathworks.com/help/matlab/index.html) licenses or installation, by editing parameters and metadata directly, then save changes back into *.slx files.
- Provide graph‑compatible structures for open source libraries  Load models into graph abstractions compatible with [Boost Graph](https://github.com/boostorg/graph), [Lemon](https://lemon.cs.elte.hu/trac/lemon),  [igraph](https://igraph.org/), or [ogdf](https://github.com/ogdf/ogdf) .
- Provide [Python](https://docs.python.org/3/)-compatible model representations for integration with modern scientific computing frameworks like [JAX](https://docs.jax.dev/en/latest/), and machine learning framworks such as [PyTorch](https://docs.pytorch.org/docs/main/), and [TensorFlow](https://www.tensorflow.org/).
- Explore models visually [Qt](https://www.qt.io/)‑based Interactive visualization to navigate model structures.

## Getting-Started

- **[Introduction](Documentation/Introduction/index.md)**  
- **[Examples](Documentation/Examples/index.md)**  
- **[Integration](Documentation/Integration/index.md)**  
- **[Platform Support](Documentation/Platform/index.md)**  
- **[Reference](Documentation/Reference/index.md)**   
- **[Changelog](Documentation/Changelog/index.md)**  
- **[Licenses](Documentation/Licenses/index.md)**

## Contributing

Slxio is an open source project, and is thus built with your contributions, if you are interested in collaborating, please see our [contributing](Documentation/Contributing/index.md) guide or contact the maintainers via email at [mail](mailto:chihawissem08@gmail.com). 

##  License

All material is provided under an Apache License unless otherwise specified. See the [LICENSE](./LICENSE.txt) file for more informations.


[![SonarQube Cloud](https://sonarcloud.io/images/project_badges/sonarcloud-light.svg)](https://sonarcloud.io/summary/new_code?id=wissem01chiha_slxio)
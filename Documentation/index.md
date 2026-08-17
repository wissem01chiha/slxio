---
title: Home
layout: home
description: "SIMULINK® SLX File I/O Library"
---

## Welcome to SLXIO

{: .fs-9 }

SIMULINK® SLX File I/O Library

[Get started now](#getting-started){: .btn .btn-primary .fs-5 .mb-4 .mb-md-0 .mr-2 }
[View it on GitHub][slxio repo]{: .btn .fs-5 .mb-4 .mb-md-0 }

## Overview

SLXIO is an open‑source C++14 library for reading, writing, visualizing, and exporting [Simulink®](https://www.mathworks.com/products/simulink.html) `.slx` model files.

The project is designed as a lightweight alternative to [MATLAB](https://www.mathworks.com/help/matlab/index.html) proprietary libraries and runtime, similar in spirit to the [MATIO](https://github.com/tbeu/matio) library for `.mat` files. Its goal is to make Simulink models accessible outside the MATLAB ecosystem, enabling manipulation and integration through modern scripting languages such as Python, Java, and others via C++ bindings. It was originally derived from the Java-based Simulink parser of the [ConQAT](https://en.wikipedia.org/wiki/ConQAT) Project. Find the original source code here   [SimulinkLibraryForJava](https://github.com/harmanpa/SimulinkLibraryForJava), ported to C++ and refactored into a highly modular architecture.

SLXIO does not aim to support all Simulink® features, but rather focuses on the most commonly used ones. The library provides a simple and intuitive api for accessing and modifying Simulink® model components such as blocks, lines, parameters, and Stateflow charts, via a mimic of the MATLAB Simulink® API. This makes it easy for users familiar with MATLAB to get started, and reduce the effort when migrating Matlab based scripts into SLXIO 
based ones.

## Project Goals

- Access Simulink® models outside MATLAB Read *.slx block‑diagram files into native C++ structures.
- Export models in scientific formats  Support [HDF5](https://www.hdfgroup.org/solutions/hdf5/), [NetCDF](https://www.unidata.ucar.edu/software/netcdf), and similar standards for use in research, simulation, and data analysis pipelines.
- Export models in visualization formats Provide [JSON](https://www.json.org/json-en.html), [Mermaid](https://mermaid.live/), [Drawio](https://www.drawio.com/), and [Graphviz](https://graphviz.org/) outputs for integration with visualization tools and lightweight sharing.
- Modify block diagrams without MATLAB licenses or installation  Edit parameters and metadata directly, then save changes back into *.slx files.
- Provide graph‑compatible structures for open source libraries  Load models into graph abstractions compatible with [Boost Graph](https://github.com/boostorg/graph), [Lemon](https://lemon.cs.elte.hu/trac/lemon),  [igraph](https://igraph.org/), or [ogdf](https://github.com/ogdf/ogdf) .
- Explore models visually  Qt‑based Interactive visualization to navigate model structures.


## Getting-Started

- **[Introduction](Introduction/index.md)**  
- **[Examples](Examples/index.md)**  
- **[Integration](Integration/index.md)**  
- **[Platform Support](Platform/index.md)**  
- **[Reference](Reference/index.md)**  
- **[Contributing](Contributing/index.md)**  
- **[Changelog](Changelog/index.md)**  
- **[Licenses](Licenses/index.md)** 
-  

[slxio repo]: https://github.com/wissem01chiha/slxio
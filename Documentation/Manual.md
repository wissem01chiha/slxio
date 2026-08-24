# Overview

Slxio is an open‑source C++14 library for reading, writing, visualizing, and exporting [Simulink®](https://www.mathworks.com/products/simulink.html) `.slx` model files. It began as a lightweight alternative to [MATLAB](https://www.mathworks.com/help/matlab/index.html) proprietary libraries and runtime, similar to the [MATIO](https://github.com/tbeu/matio) library for `.mat` files. The goal is to make Simulink models usable outside the MATLAB ecosystem, enabling integration with modern scripting languages such as Python, Java, and others through C++ bindings. The project was originally derived from the Java‑based Simulink parser of the [ConQAT](https://en.wikipedia.org/wiki/ConQAT) Project, with the source code available at [SimulinkLibraryForJava](https://github.com/harmanpa/SimulinkLibraryForJava). It was later ported to C++ and refactored into a modular architecture.

We does not aim to support every Simulink® feature, but instead focuses on the most commonly used ones. It provides a simple and intuitive API for accessing and modifying model components such as blocks, lines, parameters, and Stateflow charts, closely mimicking the MATLAB Simulink® API. This makes it easier for MATLAB users to get started and reduces the effort of migrating MATLAB‑based scripts into Slxio.

The Simulink file format is complex, relying on open‑packaging conventions that combine archived zip files with XML descriptions. Its internal structure has changed across MATLAB versions, and since MathWorks does not provide official documentation (such as XML schemas) for `.slx` files, I worked to build a cross‑platform, cross‑version access library. At the time, no open‑source solutions existed to bridge Simulink with Python‑based simulation frameworks. The project is still under development, and many features listed in the next section are not yet ready. Performance is not the main focus; instead, the priority is delivering core functionality. version 0.1.0 is still to come.

## Key features

- Access  [Simulink®](https://www.mathworks.com/products/simulink.html) models outside [MATLAB®](https://www.mathworks.com/help/matlab/index.html) Read `.slx` block‑diagram files into native C++ structures.
- Export models in scientific formats  Support [HDF5](https://www.hdfgroup.org/solutions/hdf5/), [NetCDF](https://www.unidata.ucar.edu/software/netcdf), and similar standards for use in research, simulation, and data analysis pipelines.
- Export models in visualization formats Provide [Json](https://www.json.org/json-en.html), [Mermaid](https://mermaid.live/), [Drawio](https://www.drawio.com/), and [Graphviz](https://graphviz.org/) outputs for integration with visualization tools and lightweight sharing.
- Modify block diagrams without [MATLAB®](https://www.mathworks.com/help/matlab/index.html) licenses or installation, by editing parameters and metadata directly, then save changes back into *.slx files.
- Provide graph‑compatible structures for open source libraries  Load models into graph abstractions compatible with [Boost Graph](https://github.com/boostorg/graph), [Lemon](https://lemon.cs.elte.hu/trac/lemon),  [igraph](https://igraph.org/), or [ogdf](https://github.com/ogdf/ogdf) .
- Provide [Python](https://docs.python.org/3/)-compatible model representations for integration with modern scientific computing frameworks like [Jax](https://docs.jax.dev/en/latest/), and machine learning framworks such as [PyTorch](https://docs.pytorch.org/docs/main/), and [TensorFlow](https://www.tensorflow.org/).
- Explore models visually [Qt](https://www.qt.io/)‑based Interactive visualization to navigate model structures.

## Getting-Started

- **[Introduction](./Introduction/index.md)**  
- **[Examples](./Examples/index.md)**  
- **[Integration](./Integration/index.md)**  
- **[Platform Support](./Platform/index.md)**  
- **[Reference](./Reference/index.md)**
- **[Changelog](./Changelog/index.md)** 
- **[Contributing](./Contributing/index.md)**  
- **[Licenses](./Licenses/index.md)**
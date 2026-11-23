# SLXIO

SLXIO – SIMULINK SLX File I/O Library

## Status

[![Windows](https://github.com/wissem01chiha/slxio/actions/workflows/windows.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/windows.yml)
[![MinGW](https://github.com/wissem01chiha/slxio/actions/workflows/mingw.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/mingw.yml)
[![Ubuntu](https://github.com/wissem01chiha/slxio/actions/workflows/ubuntu.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/ubuntu.yml)
[![MacOS](https://github.com/wissem01chiha/slxio/actions/workflows/macos.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/macos.yml)
[![CodeQL](https://github.com/wissem01chiha/slxio/actions/workflows/codeql.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/codeql.yml)
[![Build status](https://ci.appveyor.com/api/projects/status/40jlbucsjjxehn76?svg=true)](https://ci.appveyor.com/project/wissem01chiha/SLXIO)
[![Sanitizer](https://github.com/wissem01chiha/slxio/actions/workflows/sanitizer.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/sanitizer.yml)
[![Regress](https://github.com/wissem01chiha/slxio/actions/workflows/regress.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/regress.yml)
![GitHub License](https://img.shields.io/github/license/wissem01chiha/slxio)
[![Release](https://github.com/wissem01chiha/slxio/actions/workflows/release.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/release.yml)
[![Coverage Status](https://coveralls.io/repos/github/wissem01chiha/slxio/badge.svg?branch=develop)](https://coveralls.io/github/wissem01chiha/slxio?branch=develop)
[![CodeFactor](https://www.codefactor.io/repository/github/wissem01chiha/slxio/badge/master)](https://www.codefactor.io/repository/github/wissem01chiha/SLXIO/overview/master)
<a href="https://scan.coverity.com/projects/wissem01chiha-slxio">
  <img alt="Coverity Scan Build Status"
       src="https://scan.coverity.com/projects/33387/badge.svg"/>
</a>
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/e91d3a5f2f39464bb6dcf2d6b582541b)](https://app.codacy.com/gh/wissem01chiha/slxio/dashboard?utm_source=gh&utm_medium=referral&utm_content=&utm_campaign=Badge_grade)
[![pre-commit.ci status](https://results.pre-commit.ci/badge/github/wissem01chiha/slxio/master.svg)](https://results.pre-commit.ci/latest/github/wissem01chiha/slxio/master)
[![REUSE compliance](https://github.com/wissem01chiha/slxio/actions/workflows/reuse.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/reuse.yml)

## Overview

SLXIO is an open-source C++17 library for reading and exporting [Simulink](https://www.mathworks.com/products/simulink.html) model files. The project is designed as a lightweight alternative to proprietary [MATLAB](https://www.mathworks.com/help/matlab/index.html) libraries and runtimes. Its primary goal is to make Simulink models accessible outside the MATLAB ecosystem, enabling manipulation and integration through modern scripting languages such as Python and Java through C++ bindings.

The project grew out of years of struggling with vendor-locked Simulink files and the lack of open-source alternatives offering comparable capabilities. Its main goal is to integrate Simulink with the Python ecosystem and bridge the gap in software tooling.

It was originally derived from the Java-based Simulink parser in the [ConQAT](https://en.wikipedia.org/wiki/ConQAT) project. The original source code is available [here](https://github.com/harmanpa/SimulinkLibraryForJava). It was ported to C++ and refactored into a highly modular architecture.

We do not aim to support every Simulink feature. Instead, the library focuses on the most commonly used ones. It provides a simple and intuitive API for accessing and modifying Simulink model components such as blocks, lines, parameters, and Stateflow charts, modeled after the MATLAB Simulink API. This makes it easy for users familiar with MATLAB to get started.

## Installing

If you're new, try our [Getting-Started](https://github.com/wissem01chiha/slxio/wiki/Introduction/index.md) guide

You can install a [prebuilt package](https://github.com/wissem01chiha/slxio/wiki/Prebuilt-Packages) or [compile from source](https://github.com/wissem01chiha/slxio/wiki/Compile-from-Source).

## API Documentation Reference

Check our [Wiki](https://github.com/wissem01chiha/slxio/wiki) for detailed documentation and examples.

## FAQ

Have a question? Want some tips? Feel free to join the [discussions](https://github.com/wissem01chiha/slxio/discussions) or open an issue on our [issue tracker](https://github.com/wissem01chiha/slxio/issues).

## Changelog

See [Changelog](CHANGELOG.md) file for project API changes.

## Support

For bugs, please [report an issue](https://github.com/wissem01chiha/slxio/issues), submit a [pull request](https://github.com/wissem01chiha/slxio/pulls) or catch me on [email](mailto:chihawissem08@gmail.com)

Currently, there is no official mailing list for the project, as there is only one developer/maintainer, feel free to contact me directly instead. [mail: chihawissem08 [dot] gmail [dot] com](mailto:chihawissem08@gmail.com)

## Contributing

> [!WARNING]
> The project is still on early developpment phase, and no release is yet published, 

Any contributions are greatly appreciated, see our [Contributing](./CONTRIBUTING.md) for some contribution guidelines.

## Compatibility

The long-term vision is to support all Simulink releases starting with R2019a. However, this is a substantial amount of work, and the current focus is primarily on R2019a compatibility. Support for newer Simulink releases or patches, if available, will be documented according to the slxio [semantic versioning](https://semver.org/) scheme.

## Limitations

- Exporting mdl files from models that were originally stored as slx files is currently not supported. because slx files are [opc](https://en.wikipedia.org/wiki/Open_Packaging_Conventions)-based archives, converting them back to the legacy flat mdl format can produce schema inconsistencies that do not always match the traditional mdl hierarchical structure.

- Internal changes introduced by mathworks in newer file formats may cause some metadata fields to be unavailable or parsed differently. as a result, metadata extraction may not be fully consistent across all supported releases. support for these format variations will be improved incrementally, and affected fields may be reported through library warnings in future versions.

## Acknowledgments

Many thanks to everyone who has contributed to this project, whether by reporting issues, submitting pull requests, or providing other forms of support. 

## Security

For information on reporting security vulnerabilities, see [SECURITY](SECURITY.md).

##  License

All material is provided under an Apache License unless otherwise specified. See the [LICENSE](./LICENSE.txt) file for more informations.

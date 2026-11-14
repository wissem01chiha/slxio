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
![GitHub License](https://img.shields.io/github/license/wissem01chiha/slxio)
[![Release](https://github.com/wissem01chiha/slxio/actions/workflows/release.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/release.yml)
[![Coverage Status](https://coveralls.io/repos/github/wissem01chiha/slxio/badge.svg?branch=develop)](https://coveralls.io/github/wissem01chiha/slxio?branch=develop)
[![CodeFactor](https://www.codefactor.io/repository/github/wissem01chiha/slxio/badge/master)](https://www.codefactor.io/repository/github/wissem01chiha/SLXIO/overview/master)
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/e91d3a5f2f39464bb6dcf2d6b582541b)](https://app.codacy.com/gh/wissem01chiha/slxio/dashboard?utm_source=gh&utm_medium=referral&utm_content=&utm_campaign=Badge_grade)
[![pre-commit.ci status](https://results.pre-commit.ci/badge/github/wissem01chiha/slxio/master.svg)](https://results.pre-commit.ci/latest/github/wissem01chiha/slxio/master)
[![REUSE compliance](https://github.com/wissem01chiha/slxio/actions/workflows/reuse.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/reuse.yml)

## Overview

Slxio is an open‑source C++14 library for reading, writing, visualizing, and exporting [Simulink®](https://www.mathworks.com/products/simulink.html) `.slx` model files.

The project is designed as a lightweight alternative to [MATLAB®](https://www.mathworks.com/help/matlab/index.html) proprietary libraries and runtime, similar in spirit to the [MATIO](https://github.com/tbeu/matio) library for `.mat` files. Its goal is to make Simulink models accessible outside the MATLAB ecosystem, enabling manipulation and integration through modern scripting languages such as Python, Java, and others via C++ bindings. It was originally derived from the Java-based Simulink parser of the [ConQAT](https://en.wikipedia.org/wiki/ConQAT) Project. Find the original source code  [here](https://github.com/harmanpa/SimulinkLibraryForJava), ported to C++ and refactored into a highly modular architecture.

Slxio does not aim to support all Simulink® features, but rather focuses on the most commonly used ones. The library provides a simple and intuitive api for accessing and modifying Simulink® model components such as blocks, lines, parameters, and Stateflow charts, via a mimic of the MATLAB Simulink® API. This makes it easy for users familiar with MATLAB to get started, and reduce the effort when migrating Matlab based scripts into Slxio
based ones.

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

Any contributions are greatly appreciated, see [Contributing](./CONTRIBUTING.md) for some contribution guidelines.

Currently, there is no official mailing list for the project, as there is only one developer/maintainer, feel free to contact me directly instead. [mail: chihawissem08 [dot] gmail [dot] com](mailto:chihawissem08@gmail.com)

## Acknowledgments

Many thanks to everyone who has contributed to this project, whether by reporting issues, submitting pull requests, or providing other forms of support. 

## Security

For information on reporting security vulnerabilities, see [SECURITY](SECURITY.md).

##  License

All material is provided under an Apache License unless otherwise specified. See the [LICENSE](./LICENSE.txt) file for more informations.

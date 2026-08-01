---
title: User's Guide
nav_order: 1
---

# Libopc User's Guide

## Welcome to Libopc !

Libopc is a C library for processing [ISO/IEC 29500‑2](https://www.iso.org/standard/77818.html) (Open Packaging Conventions) files.It was originally developed by [Florian Reuter](https://github.com/freuter).

The OPC file format is natively supported in the Windows SDK starting with Windows 7, via the [Packaging](https://learn.microsoft.com/en-us/previous-versions/windows/desktop/opc/packaging?redirectedfrom=MSDN) API. Libopc aims to provide a free, non‑Windows solution for manipulating such files in C and C++ applications.

Libopc focuses on packaging files and managing relationship parts. For example, inserting an image requires setting up relationships and adding the image into the package. It does not support editing the actual document data (e.g., PNG, JPEG, etc.).
For that, we recommend using your own library/tool, as mentioned in [issue #3](https://github.com/freuter/libopc/issues/3).

This user's guide has the following contents:

*   [Install](INSTALL.md) - Step by step guide to build and install libopc
*   [Samples](SAMPLES.md) - Describes some project usage samples.
*   [FAQ](FAQ.md) - Have a question? Want some tips? Check here first.
*   [News](NEWS.md) - Project API Changes reference and release updates
*   [contributing](CONTRIBUTING.md) -  contributing guide
*   [Todo](TODO.md) - Todo-list for project contributors

---
title: Platform Support
description: supported platforms for buidling and running slxio
---

## Platform Support

SLXIO supports Windows, Linux, and macOS platforms. It primarily uses widely adopted open-source compilers, with compiler support ported for each platform. Other platforms are not supported. For detailed platform and compiler support information, refer to the table below.

| OS                   | Compiler     | Architecture | Status    |
|----------------------|--------------|--------------|-----------|
| Windows (VS 2022)    | MSVC         | Win32        |[![Build status](https://ci.appveyor.com/api/projects/status/40jlbucsjjxehn76?svg=true)](https://ci.appveyor.com/project/wissem01chiha/slxio)           |
| Windows (VS 2022)    | MSVC         | x64          |[![Build status](https://ci.appveyor.com/api/projects/status/40jlbucsjjxehn76?svg=true)](https://ci.appveyor.com/project/wissem01chiha/slxio)           |
| Windows (VS 2022)    | Clang        | Win32        |[![Build status](https://ci.appveyor.com/api/projects/status/40jlbucsjjxehn76?svg=true)](https://ci.appveyor.com/project/wissem01chiha/slxio)           |
| Windows (VS 2022)    | Clang        | x64          |[![Build status](https://ci.appveyor.com/api/projects/status/40jlbucsjjxehn76?svg=true)](https://ci.appveyor.com/project/wissem01chiha/slxio)           |
| Windows              | MinGW        | x64          |[![MinGW](https://github.com/wissem01chiha/slxio/actions/workflows/mingw.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/mingw.yml)           |
| macOS (latest)       | Apple Clang  | Native*      |[![MacOS](https://github.com/wissem01chiha/slxio/actions/workflows/macos.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/macos.yml)           |
| macOS (latest)       | GCC 13       | Native*      |[![MacOS](https://github.com/wissem01chiha/slxio/actions/workflows/macos.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/macos.yml)           |
| Ubuntu (latest)      | GCC          | x64          |[![Ubuntu](https://github.com/wissem01chiha/slxio/actions/workflows/ubuntu.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/ubuntu.yml)           |
| Ubuntu (latest)      | Clang 15     | x64          |[![Ubuntu](https://github.com/wissem01chiha/slxio/actions/workflows/ubuntu.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/ubuntu.yml)           |

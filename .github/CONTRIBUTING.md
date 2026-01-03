<!-- omit in toc -->
# Contributing Guide 

- [Welcome](#welcome)
- [Project overview](#project-overview)
- [Before you start](#before-you-start)
- [Environment setup](#environment-setup)
  - [Troubleshoot](#troubleshoot)
- [Best practices](#best-practices)
- [Content style guide](#content-style-guide)
  - [Fork and clone repositories](#fork-and-clone-repositories)
  - [Report issues and bugs](#report-issues-and-bugs)
  - [Issue management](#issue-management)
  - [Commit messages](#commit-messages)
  - [Branch creation](#branch-creation)
  - [Pull requests](#pull-requests)
  - [Releases](#releases)
  - [Text formats](#text-formats)

## Welcome

Welcome to the slxio Contributing Guide, and thank you for your interest.
If you would like to contribute to a specific part of the project, check out the following list of contributions that we accept and their corresponding sections that are within this guide:

* {Contribution type 1}
  * {Section 1}
  * {Section 2}
  * {Section 3}
* {Contribution type 2}
  * {Section 1}
  * {Section 2}
  * {Section 3}

However, at this time, we do not accept the following contributions:

* {Contribution type 1}
* {Contribution type 2}
* {Contribution type 3}

## Project overview
  see [README](../README.md) for generale project overview 

## Before you start

Before you start contributing, ensure you have the following:

* {Item 1}
* {Item 2}
* {Item 3}

## Environment setup

To set up your environment, perform the following actions:

* {Step 1}
* {Step 2}
* {Step 3}

### Troubleshoot

If you encounter issues as you set up your environment, refer to the following:

* Windows: {share a link to an external page that shares troubleshooting steps or share the procedure as sub-bullets}
* macOS: {share a link to an external page that shares troubleshooting steps or share the procedure as sub-bullets}
* Linux: {share a link to an external page that shares troubleshooting steps or share the procedure as sub-bullets}

## Best practices

{Option 1} Our project has adopted the following best practices for contributing:

* {Item 1}
* {Item 2}
* {Item 3}

## Content style guide

Read our {name and link to your style guide} to understand our guidelines for writing and formatting documents. The purpose of our style guide is to ensure consistency in the tone, voice, and structure of our documentation.

### Fork and clone repositories

{Provide instructions on how to fork and clone your repository. Alternatively, provide a link to a Git guide that explains the process.}

### Report issues and bugs

- Make sure that you are using the latest release version.
- To see if other users have experienced (and potentially already solved) the same issue you are having, check if there is not already a bug report existing for your bug or error in the [bug tracker](https://github.com/wissem01chiha/slxio/issues).
- for nwo there are ready-to-go templates for bug reporting and faeture request, if your rleated request do not fit into theose templates to add other templates open an github request 

### Issue management

{Provide instructions on how to create, tag, and assign issues.}

### Commit messages

for now there is not any restriction about commit message format, use the format you want 

### Branch creation

The project uses the Git branching system with the following main branches:

- `master` – stable, production-ready code  
- `develop` – active development and integration  
- `hotfix` – urgent fixes applied directly to `master`

fature branches are created upon the approval of of a new fature 

for more information : https://www.geeksforgeeks.org/git/branching-strategies-in-git/

### Pull requests

{Provide instructions on how to submit a pull request. Share a link to an example pull request or include the pull request template you want contributors to use within this section.}

runing clang format:
dos2unix clang-format.sh

C:\cygwin64\bin\bash.exe -l -c "/cygdrive/c/Users/chiha/OneDrive/Documents/github/slxio/Development/clang-format.sh"

#  To‑Do List

These are the main features and issues planned to be added or fixed:

- Python bindings for modules 
  - All related module bindings should be placed into:  
    ```
    /<module-namespace>/<module_name>/Binding/Python
    ```  
  - Other language bindings should follow the same pattern, e.g.:  
    ```
    /<module-namespace>/<module_name>/Binding/Rust
    ```  
  - Each module manages its own bindings.  
  - Project‑root bindings should be placed into the main [Binding](https://github.com/wissem01chiha/slxio/tree/master/Binding) folder, named by language.

- JSON serializer module  
  - Start implementation in [IO‑Json](https://github.com/wissem01chiha/slxio/tree/master/IO).

- CMake tooling fixes  
  - Fix `clang-format` and `cppcheck` CMake target construction in:  
    - [CppCheck.cmake](https://github.com/wissem01chiha/slxio/blob/master/CMake/CppCheck.cmake)  
    - [CheckClangSupport.cmake](https://github.com/wissem01chiha/slxio/blob/master/CMake/CheckClangSupport.cmake)

- Compiler flag helpers  
  - Add a CMake module file providing helper macros for compiler flag support.

- Compile definitions  
  - Fix compile definitions in the main `module.cmake` (`PUBLIC_COMPILE_DEFINITIONS`) and private compiler definition functions.  
  - Ensure support for module‑specific compile‑time flags.

- Matlab script parsing  
  - Add source files for parsing Matlab scripts into an AST (Abstract Syntax Tree) in the [Matlab Utilities module](https://github.com/wissem01chiha/slxio/tree/master/Utilities/Matlab).  
  - Support parsing of Matlab function blocks.  
  - Tools like ANTLR can be used to assist.

- Test coverage 
  - Fix and add coverage generation for tests.

- Fuzzing support 
  - Add fuzzing support in the [Fuzzing](https://github.com/wissem01chiha/slxio/tree/master/Fuzzing) module.
 
### Releases

{Provide a description of the release process and cadence for the project, such as the source code.}

### Text formats

{Provide information on what you need contributors to know and use to edit and create documents.}



<!-- omit in toc -->
# Slxio Testing Kit

- [1.0 Introduction](#10-introduction)
- [2.0 Test Structure](#20-test-structure)
- [3.0 Running Tests](#30-running-tests)

## 1.0 Introduction
This folder contains project regression tests as well as all public SLXIO API test executables for the planned and supported MATLAB releases.

## 2.0 Test Structure
Testing assets are hosted in the [Data](Data/) folder, organized by MATLAB release.  
We use a consistent naming pattern for assets: the same SLX file name (e.g., `TestAsset1.slx`) appears in multiple release folders, referring to the same model exported across different MATLAB versions.  

Allowed test asset files must follow the naming convention:  
`TestAssetX.slx` where **X** is a numeric integer.

## 3.0 Running Tests
Once compiled, all project tests can be executed and parameterized through the unified testing helper scripts in the [Development](/Development/) kit.

- Run all project tests:
```bash
./test.bat
```

- Run only regression/API tests:
```bash
./test.bat -r
```

- Run only unit tests:
```bash
./test.bat -u
```

- Run a specific unit test:
```bash
./test.bat -u TestCoreSystemFile
```

Run unit tests for a specific module:
```bash
./test.bat -u -m Simulink::Core
```
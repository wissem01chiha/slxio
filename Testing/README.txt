Slxio Testing Kit

1.0 Introduction

This folder contains project regression tests as well as all public API test executables for the planned and supported MATLAB releases.

2.0 Test Structure

Testing assets are hosted in the Data folder, organized by MATLAB releases.
We use a consistent naming pattern for assets: the same slx file name (e.g., `TestAsset1.slx`) appears in multiple release folders, referring to the same model exported across different MATLAB versions.

Allowed test asset files must follow the naming convention:
`TestAssetX.slx` where **X** is a numeric integer.

3.0 Running Tests

Once compiled, all project tests can be executed and parameterized through the unified testing helper scripts in the [Development](/Development/) kit.

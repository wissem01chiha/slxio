---
title: Supported MATLAB
layout: page
---

# Supported MATLAB

SLXIO aims to support MATLAB releases from R2018a to R2025a. Currently, the primary supported versions are R2019a and R2018a. Additional versions will be progressively supported in future project releases.

> [!NOTE]
> Some new features introduced in the graphical interface (e.g., layout, formatting, annotations) by [MathWorks](https://www.mathworks.com/) may not be available, as the project focuses on core model/library block diagram data.

[*.mdl](https://amazingalgorithms.com/file-extensions/mdl/) files are out of scope, for certain specific releases they may be partially compatible, but no support or fixes are planned for mdl file compatibility.

At present, there is no official documentation from MathWorks regarding the slx data format or XML schema rules. As a result, this project relies on reverse engineering and interpretation of actual compressed slx files.

To ensure compatibility when using slxio with unsupported Simulink versions, we recommend exporting models to one of the supported versions before reading them. This process may require a valid MATLAB license.
For more information, see: [Simulink Export to Version](https://www.mathworks.com/help/simulink/slref/simulink.exporttoversion.html).

#### 1.2.1 MATLAB Regression Testing Matrix

| Release | Status | Comment | Release Notes                                                                                                                             |
|---------|--------|--------|--------------------------------------------------------------------------------------------------------------------------------------------|
| R2018a  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2018a/r2018a-update-2-release-notes.pdf)|
| R2018b  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2018b/r2018b-updates-release-notes.pdf) |
| R2019a  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2019a/r2019a-updates-release-notes.pdf) |
| R2019b  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2019b/r2019b-updates-release-notes.pdf) |
| R2020a  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2020a/r2020a-updates-release-notes.pdf) |
| R2020b  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2020b/r2020b-updates-release-notes.pdf) |
| R2021a  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2021a/r2021a-updates-release-notes.pdf) |
| R2021b  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2021b/r2021b-updates-release-notes.pdf) |
| R2022a  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2022a/r2022a-updates-release-notes.pdf) |
| R2022b  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2022b/r2022b-updates-release-notes.pdf) |
| R2023a  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2023a/r2023a-updates-release-notes.pdf) |
| R2023b  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2023b/r2023b-updates-release-notes.pdf) |
| R2024a  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2024a/r2024a-updates-release-notes.pdf) |
| R2024b  |        |        | [Release Notes](https://www.mathworks.com/matlabcentral/discussions/uploaded_files/35746/Whats_New_In_MATLAB_R2024b%202.pdf)               |
| R2025a  |        |        | [Release Notes](https://www.mathworks.com/help/matlab/release-notes.html?startrelease=R2025a&endrelease=R2025b&rntext=&groupby=release&sortby=descending&searchHighlight=) |
| R2025b  |        |        | [Release Notes](https://www.mathworks.com/help/matlab/release-notes.html?startrelease=R2025a&endrelease=R2025b&rntext=&groupby=release&sortby=descending&searchHighlight=) |

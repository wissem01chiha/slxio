# Examples

The following examples demonstrate basic programmatic editing of Simulink® models using the SLXIO API. Most examples are inspired by and adapted from the official MathWorks documentation for [Programmatic Model Editing](https://www.mathworks.com/help/simulink/programmatic-modeling.html).

Where possible, we intentionally preserve the concepts and workflows of the original Simulink APIs to make it easier for MATLAB® and Simulink® users to get started with slxio.

> [!WARNING]  
> SXLIO is a static model manipulation library and does not support model compilation, simulation, or features that require a compiled model state. Operations that depend on signal resolution, data type propagation, compiled port information, or other compile-time metadata are therefore not available.


- @subpage Models
- @subpage Libraries
- @subpage Export
- @subpage Sldd
- @subpage Stateflow

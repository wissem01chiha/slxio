/**
 *
 * @page Matlab_support MATLAB Support
 * 
 * The primary supported MATLAB version is **R2019a**. Other versions later than R2019a may also be compatible,
 * provided the Simulink XML schema has not changed significantly between releases.
 * Currently, there is no official documentation from MathWorks regarding the SLX data format or XML schema rules.
 * As a result, this project relies on reverse engineering and interpretation of actual SLX files.
 *
 * To ensure compatibility when using slxio with other unsupported Simulink versions, 
 * we recommend exporting models to one of the supported versions before reading them. This process may 
 * require a valid MATLAB license. For more information, see
 * [link](https://www.mathworks.com/help/simulink/slref/simulink.exporttoversion.html).
 *
 * 
 * ---
 * <h4>Supported Simulink Blocks</h4>
 * 
 * The following table lists the Simulink blocks that are currently supported for reading by slxio.
 * @note Reading or Writing blocks parameter support is currently not implemented for any blocks.
 * 
 * | Block Name       | Supported Since | Read | Write | Parameters | 
 * |------------------|-----------------|------|-------|------------|
 * | Gain             |            | ❌   | ❌    | ❌        | 
 * | Sum              |            | ❌   | ❌    | ❌        |
 * | Constant         |            | ❌   | ❌    | ❌        |
 * | Product          |            | ❌   | ❌    | ❌        |
 * | Subsystem        |            | ❌   | ❌    | ❌        |
 * | Stateflow Chart  |              | ❌   | ❌    | ❌         | 
 * | Inport           |            | ❌   | ❌    | ❌        |
 * | Outport          |            | ❌   | ❌    | ❌
 * | Scope            |            | ❌   | ❌    | ❌        |
 * | Mux              |            | ❌   | ❌    | ❌        |
 * | Demux            |            | ❌   | ❌    | ❌
 * | Enabled Subsystem|            | ❌   | ❌    | ❌        |
 * | Triggered Subsystem|           | ❌   | ❌    | ❌        |
 * | Delay            |            | ❌   | ❌    | ❌        |
 * | Unit Delay       |            | ❌   | ❌    | ❌        |
 * | Memory           |            | ❌   | ❌    | ❌        |
 * | Data Store Read  |            | ❌   | ❌    | ❌        |
 * | Data Store Write |            | ❌   | ❌    | ❌        |
 * | MATLAB Function  |            | ❌   | ❌    | ❌        |
 * | If Action Subsystem |          | ❌   | ❌    | ❌        |
 * | Switch           |            | ❌   | ❌    | ❌        |
 * | Multiport Switch |            | ❌   | ❌    | ❌
 * | Merge            |            | ❌   | ❌    | ❌        |
 * | Chart            |            | ❌   | ❌    | ❌        |
 * | State            |            | ❌   | ❌    | ❌        |
 * | Transition       |            | ❌   | ❌    | ❌        |
 * | Event            |            | ❌   | ❌    | ❌        |
 * | Function         |            | ❌   | ❌    | ❌        |
 * | Junction         |            | ❌   | ❌    | ❌        |
 * | Action           |            | ❌   | ❌    | ❌        |
 * | Condition        |            | ❌   | ❌    | ❌        |
 * 
 * ---
 * <h4>Supported MATLAB Releases</h4>
 *
 *
 * | MATLAB Release | Supported Since | Read | Write  | C++ | Python |
 * |----------------|-----------------|------|--------|-----|--------|
 * | R2019a         | 0.1.0           | ✅   | ❌    | ✅  | ❌    |
 * | R2019b         | 0.1.0           | ✅   | ❌    | ✅  | ❌    |
 * | R2020a         |                 | ❌   | ❌    | ❌  | ❌    |
 * | R2020b         |                 | ❌   | ❌    | ❌  | ❌    |
 * | R2021a         |                 | ❌   | ❌    | ❌  | ❌    |
 * | R2021b         |                 | ❌   | ❌    | ❌  | ❌    |
 * | R2022a         |                 | ❌   | ❌    | ❌  | ❌    |
 * | R2022b         |                 | ❌   | ❌    | ❌  | ❌    |
 * | R2023a         |                 | ❌   | ❌    | ❌  | ❌    |
 * | R2023b         |                 | ❌   | ❌    | ❌  | ❌    |
 * | R2024a         |                 | ❌   | ❌    | ❌  | ❌    |
 * | R2024b         |                 | ❌   | ❌    | ❌  | ❌    |
 * | R2025a         |                 | ❌   | ❌    | ❌  | ❌    |
 * | R2025b         |                 | ❌   | ❌    | ❌  | ❌    |
 */

@page Models Model Manipulation


## Get Handles and Paths

- [GetSimulinkBlockHandle](./get-simulink-block-handle.md) - Get block handle from block path
- [GetFullName](./get-full-name.md) - Get the fully qualified path that identifiese.
- [GetParam](./get-param.mdmeter) names and values.
- [Gcs](./gcs.md) - Get the path ofrrent system.
- [Gcb](./gcb.md) - Get the path of the current block.
- [Gcbh.md](./gcbh.md) - Get the handle of the current block.
- [Gcbp](./gcbp.md) - Get a block-path object for the current block.
- [BdRoot](./bd-root.md) the top-level model of the current system.
- [GetCurrentAnnotation](./get-current-annotation.md) current annotation object.
- [GetCallbackAnnotation](./get-callback-annotation.md) - Get the annotation executing a callback.

## Search

### Find Model Elements

- [find-system](./find-system.md) - Find models, blocks, lines, ports, and annotations.
- [FindBlocks](./find-blocksocks) in a model.
- [FindBlocksOfType](./find-blocks-of-type.md) - Find blocks of
- [FindOptions.md](./find-options.md) - Configure model search options.
- [HiliteSystem](./hilite-system.md) - Highlight blocks, lines, ports.

### Find Models

- [AllBlockDiagrams](./all-block-diagrams) odels and libraries.
- [ModelFinderer.md]() - Search indexed models and projects.
- [RegisterFolder](./register-folder.md) - Add ael index.
- [UnregisterFolderer.md]() - Remove a folder from the model index.

### Get Model Metadata

- [ModelInfo]()./modelead model metadata without loading a model.
- [GetDescriptionon]() - Read model descriptions.
- [GetMetadata](./get-metadata.md) - Read additional 

## Create Models

### Create, Load, Open, Save, and Close Models

- [NewSystem](./new-system.md) -el in memory.
- [LoadSystem](LoadSystem.md) - Load a model from disk.
- [OpenSystem](./open-system.md) - Open atem, or block.
- [./save-system]() - Save a model.
- [CloseSystemem]() - Close a model.
- [./bd-close.md]() - Close one or more open models.

### Add, Replace, and Delete Blocks

- [/add-block.md]() - Add a block to a model.
- [AddTerms](./add-terms.md) - Add terminators to ports.
- [ReplaceBlock](./replace-ocks) matching a filter.
- [./delete-block.md] - Remove blocks from a model.
- [DeleteModelContents](./deleteemove) all contents of a model.
- ./delete-subsystem-contents.md - Remove all contents of a subsystem.

### Connect Blocks

- [ConnectBlocks]() - Connect blocks using signal lines.
- [AddLine]() - Add a signal line.
- [DeleteLine]() - Delete a signal line.

### Edit Parameters

- [/get-param.md] - Read parameter values.
- ./set-param.md]() - Set parameter values.
- [Addd-param.md]() - Add custom parameters.
- [DeleteParam](./delete-paramustom) parameters.
- [Docc-block.md]() - Read or modify documentation block content.

## Format Models

### Configure Model Layout

- [ArrangeSystem](./arrange-system.md) - Automaticallylayout.
- [Routee-line.md]() - Route existing signal lines.
- [ResizeBlocksToFitContentntent.md]() - Resize blocks based on displayed content.

### Group Model Elements into Subsystems

- [CreateSubsystem](./create-subsystem.md) - Create a subsystem from a setndSubsystem](./expand-sube a subsystem with its contents.
- [CopyContentsToBlockDiagram](./copy-contents-to-blockcontents) to another model.
- [DeleteSubsystemContents](./delete-subsystem-contents.md)s.
- [BdIsSubsystem](./md]() - Determine whether a model is a subsystem.

## Check Models

- [IsLoaded](./is-loaded.md) - Determine whether a model is loaded.
- [is-dirty.md]() - Determine whether a model contains unsaved changes.
- [IsFileChangedOnDisk](./k.md) - Detect changes since the model was loaded.
- [IsLibrary](./is-libraryine) whether a model is a library.
- [./is-subsystem.md]() - Determine whether a model is a subsystem.
- [GetDisplayIssues](./get-display-issues.md) -gn warnings and errors.
- [SetDisplayIssues](./set-display-issuesable) design issue reporting.

## Share Models

### Templates

- [ExportToTemplate](./export-to-template) able model template.
- [Createe-from-template.md]() - Create a model from a template.
- [FindTemplates]s.md - Search available templates.
- [./default-model-template.md]() - Get or set the default template.

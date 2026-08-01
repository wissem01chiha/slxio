# cpu_info

cpu_info is a lightweight, cross-platform, header-only C library for discovering information about the current platforms CPU such as logical/physical cores.

## Supported Platforms

* macOS 10.11+
* Windows 10 (untested on lower versions but should work)
* Linux

## Getting Started

The library is written as a single header file, so to use just copy and paste `include/cpu_info.h` into your project.

### Building Examples

Before building examples ensure you have **CMake** installed. Then run the following commands from the cpu_info root directory:

```shell
mkdir bin
cd bin
cmake ..
cmake --build .
```

The example binaries can be found at `<cpu_info_root>/bin/examples/`

## Usage

As cpu_info is a single-header library the header `cpu_info.h` is split into interface and implementation sections. Include the header like so for exactly one `.c/.cpp` file to define the implementation, for all other files, include it normally:

```c
#define CPU_INFO_IMPLEMENTATION
#include <cpu_info.h>
```

All information about the CPU is stored in a `cpui_result` struct and can be discovered like so:

```c
cpui_result result;
int err = cpui_get_info(&result);
```

If `cpui_get_info` fails it will return a unique error code otherwise it will return `0`. Error codes can be translated to strings using the error translation table:

```c
if (err) {
    fprintf(stderr, "An error occured while quering CPU info: code: %s\n", 
    		cpui_error_strings[err]);
    exit(EXIT_FAILURE);
}
```

And finally, on a 4 core machine with 8 logical cores (hyperthreading), the following:

```c
printf("Physical cores: %d. Logical cores: %d\n", result.physical_cores,
       result.logical_cores);
```

Should print:

```shell
Physical cores: 4. Logical cores: 8
```

## License

MIT

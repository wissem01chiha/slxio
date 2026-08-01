# TOONc

A C library for parsing TOON (Token-Oriented Object Notation), a compact, human-readable encoding of the JSON data model optimized for LLM prompts.

## Table of Contents

- [Introduction](#introduction)
- [Installation](#installation)
- [Data Structures](#data-structures)
- [API Reference](#api-reference)
  - [Parsing](#parsing)
  - [Object Creation](#object-creation)
  - [Querying](#querying)
  - [Memory Management](#memory-management)
  - [Output & Debugging](#output--debugging)
  - [Type Checking](#type-checking)
  - [Value Getters](#value-getters)
- [Examples](#examples)
- [TOON Format](#toon-format)

## Introduction

TOON combines YAML's indentation-based structure with CSV-style tabular layout for uniform arrays. It's particularly efficient for representing structured data like:

- Configuration files
- Datasets with uniform records
- Nested hierarchical data
- LLM prompts with structured context

## Installation

```bash
gcc -c toonc.c -o toonc.o
ar rcs libtoonc.a toonc.o
```

Include in your project:

```c
#include "toonc.h"
```

Link with:

```bash
gcc your_program.c -L. -ltoonc -o your_program
```

## Examples

The `examples/` directory contains a comprehensive set of examples demonstrating various features of the library. You can compile and run all examples using the following command from the root directory of the project:

```bash
make run-examples
```

Here is a brief overview of the available examples:

- **[01_basic_config.c](examples/01_basic_config.c)**: Shows how to parse a basic configuration file with nested objects and different value types.
- **[02_array_processing.c](examples/02_array_processing.c)**: Demonstrates how to read and process simple arrays of strings and numbers.
- **[03_tabular_data.c](examples/03_tabular_data.c)**: Shows how to parse and query tabular data, where each row is an object.
- **[04_programmatic_creation.c](examples/04_programmatic_creation.c)**: Illustrates how to create a `toonObject` tree programmatically in memory.
- **[05_json_conversion.c](examples/05_json_conversion.c)**: Shows how to convert a parsed TOON object into JSON format.

## Data Structures

### toonObject

The core data structure representing a TOON value:

```c
typedef struct toonObject {
    int kvtype;           /* Type: KV_STRING, KV_INT, KV_BOOL, etc. */
    int indent;           /* Indentation level (0-based) */
    char *key;            /* Property name (NULL for array items) */

    union {
        struct toonStr str;    /* String value */
        int i;                 /* Integer value */
        double d;              /* Double value */
        int boolean;           /* Boolean value (0 or 1) */

        struct {               /* Array data */
            struct toonObject **items;
            size_t len;
            size_t capacity;
        } array;
    };

    struct toonObject *child;  /* First child (for objects) */
    struct toonObject *next;   /* Next sibling */
} toonObject;
```

### Value Types

- `KV_STRING` - String value
- `KV_INT` - Integer value
- `KV_DOUBLE` - Floating-point value
- `KV_BOOL` - Boolean value (true/false)
- `KV_NULL` - Null value
- `KV_OBJ` - Object (nested structure)
- `KV_LIST` - Array/list

## API Reference

### Parsing

#### TOONc_parseFile

Parse a TOON file into a `toonObject` tree.

```c
toonObject *TOONc_parseFile(FILE *fp);
```

**Parameters:**

- `fp` - File pointer (will be closed by this function)

**Returns:**

- Root `toonObject` or `NULL` on error

**Example:**

```c
FILE *fp = fopen("config.toon", "r");
if (!fp) {
    perror("fopen");
    return 1;
}

toonObject *root = TOONc_parseFile(fp);
if (!root) {
    fprintf(stderr, "Failed to parse TOON file\n");
    return 1;
}

/* Use the parsed object tree */
TOONc_printObject(root, 0);

/* Clean up */
TOONc_free(root);
```

**Note:** The file pointer is automatically closed by this function.

#### TOONc_parseString

Parse a TOON-formatted string into a `toonObject` tree.

```c
toonObject *TOONc_parseString(const char *str);
```

**Parameters:**

- `str` - TOON formatted string

**Returns:**

- Root `toonObject` or `NULL` on error

**Example:**

```c
const char *toon_data = 
    "name: John Doe\n"
    "age: 30\n"
    "active: true\n";

toonObject *root = TOONc_parseString(toon_data);
if (!root) {
    fprintf(stderr, "Failed to parse TOON string\n");
    return 1;
}

/* Use the object */
toonObject *name = TOONc_get(root, "name");
printf("Name: %s\n", TOON_GET_STRING(name));

TOONc_free(root);
```

### Memory Management

#### TOONc_malloc

Allocate memory with error handling.

```c
void *TOONc_malloc(size_t size);
```

**Parameters:**

- `size` - Number of bytes to allocate

**Returns:**

- Pointer to allocated memory (never returns NULL, exits on failure)

#### TOONc_calloc

Allocate and zero-initialize memory.

```c
void *TOONc_calloc(size_t nmemb, size_t size);
```

**Parameters:**

- `nmemb` - Number of elements
- `size` - Size of each element

**Returns:**

- Pointer to allocated memory (never returns NULL, exits on failure)

#### TOONc_realloc

Reallocate memory block.

```c
void *TOONc_realloc(void *ptr, size_t size);
```

**Parameters:**

- `ptr` - Pointer to existing memory block
- `size` - New size in bytes

**Returns:**

- Pointer to reallocated memory (never returns NULL, exits on failure)

### Object Creation

#### TOONc_newObject

Create a new TOON object of the specified type.

```c
toonObject *TOONc_newObject(int kvtype);
```

**Parameters:**

- `kvtype` - Type constant (KV_STRING, KV_INT, KV_OBJ, etc.)

**Returns:**

- New object with all fields zeroed

**Example:**

```c
toonObject *obj = TOONc_newObject(KV_OBJ);
```

#### TOONc_newStringObj

Create a string object.

```c
toonObject *TOONc_newStringObj(char *s, size_t len);
```

**Parameters:**

- `s` - Pointer to string data
- `len` - Length of string

**Returns:**

- New string object

**Example:**

```c
toonObject *str = TOONc_newStringObj("Hello World", 11);
```

#### TOONc_newIntObj

Create an integer object.

```c
toonObject *TOONc_newIntObj(int value);
```

**Example:**

```c
toonObject *num = TOONc_newIntObj(42);
```

#### TOONc_newDoubleObj

Create a double-precision floating-point object.

```c
toonObject *TOONc_newDoubleObj(double value);
```

**Example:**

```c
toonObject *pi = TOONc_newDoubleObj(3.14159);
```

#### TOONc_newBoolObj

Create a boolean object.

```c
toonObject *TOONc_newBoolObj(int value);
```

**Example:**

```c
toonObject *flag = TOONc_newBoolObj(1);  /* true */
```

#### TOONc_newNullObj

Create a null object.

```c
toonObject *TOONc_newNullObj(void);
```

**Example:**

```c
toonObject *null_val = TOONc_newNullObj();
```

#### TOONc_newListObj

Create an empty array/list object.

```c
toonObject *TOONc_newListObj(void);
```

**Example:**

```c
toonObject *arr = TOONc_newListObj();
TOONc_listPush(arr, TOONc_newIntObj(1));
TOONc_listPush(arr, TOONc_newIntObj(2));
TOONc_listPush(arr, TOONc_newIntObj(3));
```

#### TOONc_listPush

Add an item to an array.

```c
void TOONc_listPush(toonObject *list, toonObject *item);
```

**Parameters:**

- `list` - Array object (must be `KV_LIST`)
- `item` - Object to add

**Example:**

```c
toonObject *numbers = TOONc_newListObj();
for (int i = 0; i < 10; i++) {
    TOONc_listPush(numbers, TOONc_newIntObj(i));
}
```

### Querying

#### TOONc_get

Get an object by path using dot notation.

```c
toonObject *TOONc_get(toonObject *root, const char *path);
```

**Parameters:**

- `root` - Root object to search from
- `path` - Dot-separated path (e.g., "context.task")

**Returns:**

- Found object or `NULL` if path doesn't exist

**Example:**

```c
/* Given TOON:
   context:
     task: Build a web server
     priority: high
*/

toonObject *task = TOONc_get(root, "context.task");
if (task) {
    printf("Task: %s\n", TOON_GET_STRING(task));
}

toonObject *priority = TOONc_get(root, "context.priority");
if (priority) {
    printf("Priority: %s\n", TOON_GET_STRING(priority));
}
```

#### TOONc_getArrayItem

Access a specific element of an array by index.

```c
toonObject *TOONc_getArrayItem(toonObject *arr, size_t index);
```

**Parameters:**

- `arr` - Array object
- `index` - Zero-based index

**Returns:**

- Object at the specified index or `NULL` if out of bounds

**Example:**

```c
/* Given TOON:
   friends[3]: alice,bob,charlie
*/

toonObject *friends = TOONc_get(root, "friends");
if (TOON_IS_LIST(friends)) {
    toonObject *first = TOONc_getArrayItem(friends, 0);
    printf("First friend: %s\n", TOON_GET_STRING(first));

    toonObject *second = TOONc_getArrayItem(friends, 1);
    printf("Second friend: %s\n", TOON_GET_STRING(second));
}
```

#### TOONc_getArrayLength

Get the number of elements in an array.

```c
size_t TOONc_getArrayLength(toonObject *arr);
```

**Parameters:**

- `arr` - Array object

**Returns:**

- Number of elements or 0 if not an array

**Example:**

```c
toonObject *friends = TOONc_get(root, "friends");
if (TOON_IS_LIST(friends)) {
    size_t count = TOONc_getArrayLength(friends);
    printf("You have %zu friends\n", count);

    for (size_t i = 0; i < count; i++) {
        toonObject *friend = TOONc_getArrayItem(friends, i);
        printf("  %zu: %s\n", i + 1, TOON_GET_STRING(friend));
    }
}
```

#### TOONc_free

Recursively free a TOON object tree and all its children.

```c
void TOONc_free(toonObject *obj);
```

**Parameters:**

- `obj` - Object to free

**Example:**

```c
toonObject *root = TOONc_parseFile(fp);

/* Use the object tree... */

/* Clean up everything */
TOONc_free(root);
```

**Important:** Always call `TOONc_free()` on the root object when done to prevent memory leaks.

### Output & Debugging

#### TOONc_printObject

Recursively print a TOON object tree for debugging.

```c
void TOONc_printObject(toonObject *o, int depth);
```

**Parameters:**

- `o` - Object to print
- `depth` - Initial indentation depth (usually 0)

**Example:**

```c
toonObject *root = TOONc_parseFile(fp);
TOONc_printObject(root, 0);
```

**Output:**

```
context: { (object)
  task: "Build a web server" (string)
  priority: "high" (string)
}
friends: ["alice", "bob", "charlie"] (array)
```

#### TOONc_printRoot

Print from the root (skip the root object itself).

```c
void TOONc_printRoot(toonObject *root);
```

**Example:**

```c
TOONc_printRoot(root);
```

#### TOONc_toJSON

Convert a TOON object to JSON format.

```c
void TOONc_toJSON(toonObject *obj, FILE *fp, int depth);
```

**Parameters:**

- `obj` - Object to convert
- `fp` - Output file pointer (e.g., `stdout`)
- `depth` - Initial indentation depth (usually 0)

**Example:**

```c
toonObject *root = TOONc_parseFile(fp);

printf("JSON output:\n");
TOONc_toJSON(root, stdout, 0);
printf("\n");

/* Or write to file */
FILE *out = fopen("output.json", "w");
TOONc_toJSON(root, out, 0);
fclose(out);
```

### Type Checking

Macros for checking object types:

```c
TOON_IS_STRING(obj)  /* Returns true if object is a string */
TOON_IS_INT(obj)     /* Returns true if object is an integer */
TOON_IS_DOUBLE(obj)  /* Returns true if object is a double */
TOON_IS_BOOL(obj)    /* Returns true if object is a boolean */
TOON_IS_NULL(obj)    /* Returns true if object is null */
TOON_IS_LIST(obj)    /* Returns true if object is an array */
TOON_IS_OBJ(obj)     /* Returns true if object is an object */
```

**Example:**

```c
toonObject *value = TOONc_get(root, "age");

if (TOON_IS_INT(value)) {
    printf("Age is an integer: %d\n", TOON_GET_INT(value));
} else if (TOON_IS_STRING(value)) {
    printf("Age is a string: %s\n", TOON_GET_STRING(value));
}
```

### Value Getters

Safe macros for extracting values:

```c
TOON_GET_STRING(obj)  /* Returns string pointer or NULL */
TOON_GET_INT(obj)     /* Returns int value or 0 */
TOON_GET_DOUBLE(obj)  /* Returns double value or 0.0 */
TOON_GET_BOOL(obj)    /* Returns boolean value (0 or 1) */
```

**Example:**

```c
toonObject *name = TOONc_get(root, "name");
const char *name_str = TOON_GET_STRING(name);
if (name_str) {
    printf("Name: %s\n", name_str);
}

toonObject *age = TOONc_get(root, "age");
int age_val = TOON_GET_INT(age);
printf("Age: %d\n", age_val);
```

## TOON Format

### Basic Syntax

```yaml
# Comments start with #
key: value
number: 42
floating: 3.14
boolean: true
null_value: null
quoted: "string with spaces"
```

### Nested Objects

```yaml
parent:
  child1: value1
  child2: value2
  nested:
    deep: value
```

### Simple Arrays

```yaml
numbers[3]: 1,2,3
names[4]: alice,bob,charlie,diana
mixed[2]: 42,hello
```

### Tabular Data

```toon
users[3]{id,name,email,age}:
  1,Alice,alice@example.com,25
  2,Bob,bob@example.com,30
  3,Charlie,charlie@example.com,28
```

### Complete Example

```yaml
# Application Configuration
app:
  name: MyApp
  version: 2.1.0
  debug: false

database:
  host: localhost
  port: 5432
  credentials:
    username: admin
    password: secret

servers[2]: web01.example.com,web02.example.com

users[3]{id,username,email,active}:
  1,alice,alice@example.com,true
  2,bob,bob@example.com,false
  3,charlie,charlie@example.com,true
```

## License

MIT License. See source files for details.

## Author

Davide Usberti <usbertibox@gmail.com>
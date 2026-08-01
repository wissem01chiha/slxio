/*
 * Copyright (c) 2025-Present, Davide Usberti <usbertibox@gmail.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * ================================= Program Notes ========================================
 * This C library provides an easy-to-use API to parse the TOON 
 * Token-Oriented Object Notation is a compact, human-readable encoding of the JSON 
 * data model for LLM prompts. It provides a lossless serialization of the same 
 * objects, arrays, and primitives as JSON, but in a syntax that minimizes tokens 
 * and makes structure easy for models to follow.
 *
 * TOON combines YAML's indentation-based structure for nested objects with a CSV-style
 * tabular layout for uniform arrays. TOON's sweet spot is uniform arrays of objects
 * (multiple fields per row, same structure across items), achieving CSV-like
 * compactness while adding explicit structure that helps LLMs parse and validate 
 * data reliably. For deeply nested or non-uniform data, JSON may be more efficient.
 *
 * The similarity to CSV is intentional: CSV is simple and ubiquitous, 
 * and TOON aims to keep that familiarity while remaining a lossless, drop-in 
 * representation of JSON for Large Language Models.
 *
 * Think of it as a translation layer: use JSON programmatically, 
 * and encode it as TOON for LLM input.
 */
#include "toonc.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stddef.h>
#include <ctype.h>
#include <limits.h>
#include <errno.h>

/* -----------------------------------------------------------------------------
 * Compiler-specific optimization macros
 * -------------------------------------------------------------------------- */

#if defined(_MSC_VER)
    #define FORCE_INLINE __forceinline
    #define NO_INLINE    __declspec(noinline)
#elif defined(__GNUC__) || defined(__clang__)
    #define FORCE_INLINE static inline __attribute__((always_inline))
    #define NO_INLINE    __attribute__((noinline))
#else
    #define FORCE_INLINE inline
    #define NO_INLINE
#endif

#if defined(__GNUC__) || defined(__clang__)
    #define LIKELY(x)   __builtin_expect(!!(x), 1)
    #define UNLIKELY(x) __builtin_expect(!!(x), 0)
#else
    #define LIKELY(x)   (x)
    #define UNLIKELY(x) (x)
#endif

/* -----------------------------------------------------------------------------
 * Prototypes
 * -------------------------------------------------------------------------- */
FORCE_INLINE void skipLine(toonParser *parser);
FORCE_INLINE int isCommentOrEmpty(toonParser *parser);


/* -----------------------------------------------------------------------------
 * Memory allocation wrappers
 *
 * All memory allocations go through these wrappers to handle errors uniformly.
 * On allocation failure, we print an error and exit - no error recovery is
 * attempted since running out of memory is typically fatal anyway.
 * -------------------------------------------------------------------------- */

/* Check if size * nmemb would overflow. Returns 1 on success, 0 on overflow. */
static int safe_mul_size(size_t nmemb, size_t size, size_t *result) {
    if (size != 0 && nmemb > SIZE_MAX / size) {
        return 0; /* Overflow */
    }
    *result = nmemb * size;
    return 1;
}

/* Wrapper around malloc() that never returns NULL. */
void *tmalloc(size_t size) {
    if (UNLIKELY(size == 0)) size = 1; /* Avoid malloc(0) */
    void *ptr = malloc(size);
    
    if (UNLIKELY(ptr == NULL)) {
        fprintf(stderr, "TOONC: memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    
    return ptr;
}

/* Wrapper around calloc() with overflow checking. */
void *tcalloc(size_t nmemb, size_t size) {
    size_t total;
    if (!safe_mul_size(nmemb, size, &total)) {
        fprintf(stderr, "TOONC: memory allocation overflow.\n");
        exit(EXIT_FAILURE);
    }
    
    void *ptr = calloc(1, total);
    if (UNLIKELY(ptr == NULL)) {
        fprintf(stderr, "TOONC: memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    
    return ptr;
}

/* Wrapper around realloc() that never returns NULL. */
void *trealloc(void *ptr, size_t size) {
    if (UNLIKELY(size == 0)) size = 1; /* Avoid realloc(ptr, 0) */
    void *new_ptr = realloc(ptr, size);
    if (UNLIKELY(new_ptr == NULL)) {
        fprintf(stderr, "TOONC: memory reallocation failed.\n");
        exit(EXIT_FAILURE);
    }

    return new_ptr;
}

/* Simple free wrapper - mainly here for consistency. */
void tfree(void *ptr) {
    if (ptr) {
        free(ptr);
    }
}

/* -----------------------------------------------------------------------------
 * Object creation and manipulation
 *
 * TOON objects can represent strings, numbers, booleans, null, objects, or
 * arrays. Objects are organized in a tree structure where each node can have
 * a 'child' (first property/element) and 'next' (sibling property/element).
 * -------------------------------------------------------------------------- */

/* Create a new TOON object of the given type. All fields are zeroed. */
toonObject *newObject(int kvtype) {
    toonObject *o = tmalloc(sizeof(toonObject));
    memset(o, 0, sizeof(*o));
    o->kvtype = kvtype;
    o->key = NULL;
    o->indent = 0;
    o->next = NULL;
    o->child = NULL;
    return o;
}

/* Create a string object. The string is copied into newly allocated memory. */
toonObject *newStringObj(char *s, size_t len) {
    toonObject *o = newObject(KV_STRING);
    o->str.ptr = tmalloc(len + 1);
    o->str.len = len;
    memcpy(o->str.ptr, s, len);
    o->str.ptr[len] = '\0';
    return o;
}

/* Create an integer object. */
toonObject *newIntObj(int value) {
    toonObject *o = newObject(KV_INT);
    o->i = value;
    return o;
}

/* Create a double-precision floating point object. */
toonObject *newDoubleObj(double value) {
    toonObject *o = newObject(KV_DOUBLE);
    o->d = value;
    return o;
}

/* Create a boolean object. */
toonObject *newBoolObj(int value) {
    toonObject *o = newObject(KV_BOOL);
    o->boolean = !!value; /* Normalize to 0 or 1 */
    return o;
}

/* Create a null object. */
toonObject *newNullObj(void) {
    return newObject(KV_NULL);
}

/* Create an array/list object. Initially empty with no capacity. */
toonObject *newListObj(void) {
    toonObject *o = newObject(KV_LIST);
    o->array.items = NULL;
    o->array.len = 0;
    o->array.capacity = 0;
    return o;
}

/* Add an item to an array. The array grows dynamically as needed. */
void listPush(toonObject *list, toonObject *item) {
    if (list->kvtype != KV_LIST) return;
    
    size_t len = list->array.len;
    size_t capacity = list->array.capacity;

    /* Grow the array if we're at capacity. We double the size each time,
     * starting from an initial capacity of 4. This gives us amortized O(1)
     * insertion time. */
    if (UNLIKELY(len >= capacity)) {
        size_t new_cap = capacity == 0 ? 4 : capacity * 2;
        list->array.items = trealloc(list->array.items, sizeof(toonObject *) * new_cap);
        list->array.capacity = new_cap;
    }
    list->array.items[list->array.len++] = item;
}

/* Recursively free a TOON object tree. We iterate through 'next' siblings
 * to avoid deep recursion, but recurse on 'child' nodes. For arrays, we
 * free each element before freeing the array itself. */
void TOONc_free(toonObject *obj) {
    if (obj == NULL) return;
    
    /* Free all siblings iteratively to avoid stack overflow on wide trees. */
    toonObject *current = obj->next;
    while (current) {
        toonObject *next = current->next;
        current->next = NULL; /* Break the chain to avoid cycles */
        TOONc_free(current);
        current = next;
    }
    
    /* Recurse on children. This is safe because TOON's indentation limits
     * the depth of nesting. */
    if (obj->child) {
        TOONc_free(obj->child);
    }
    
    /* Free the key if present. */
    if (obj->key) {
        tfree(obj->key);
    }
    
    /* Free type-specific data. */
    switch (obj->kvtype) {
        case KV_STRING:
            if (obj->str.ptr) {
                tfree(obj->str.ptr);
            }
            break;
        case KV_LIST:
            /* Free all array elements before freeing the array. */
            if (obj->array.items) {
                for (size_t i = 0; i < obj->array.len; i++) {
                    TOONc_free(obj->array.items[i]);
                }
                tfree(obj->array.items);
            }
            break;
        default:
            /* Other types don't allocate additional memory. */
            break;
    }
    
    tfree(obj);
}

/* -----------------------------------------------------------------------------
 * Parsing primitives
 *
 * These small functions handle the low-level details of parsing: skipping
 * whitespace, consuming newlines, counting indentation, and so on.
 * -------------------------------------------------------------------------- */

/* Skip horizontal whitespace (spaces and tabs) on the current line. */
FORCE_INLINE void parseSpaces(toonParser *parser) {
    while (parser->p[0] == ' ' || parser->p[0] == '\t')
        parser->p++;
}

/* Consume a newline and increment the line counter. */
FORCE_INLINE void parseNewLine(toonParser *parser) {
    if (LIKELY(parser->p[0] == '\n')) {
        parser->p++;
        parser->line++;
    }
}

/* Count leading spaces and return the indentation level.
 * TOON uses 2 spaces per indentation level. */
FORCE_INLINE int parseIndent(toonParser *parser) {
    int spaces = 0;
    while (parser->p[0] == ' ') {
        spaces++;
        parser->p++;
    }
    
    return spaces / 2; /* 2 spaces = 1 indent level */
}

/* Parse a key name. Keys end at ':', '[', '{', or newline.
 * Trailing whitespace is trimmed. */
char *parseKey(toonParser *parser, size_t *len) {
    char *start = parser->p;

    /* Scan until we hit a delimiter. */
    while (parser->p[0] &&
            parser->p[0] != ':' &&
            parser->p[0] != '[' &&  /* Array notation: key[5] */
            parser->p[0] != '{' &&  /* Table notation: key[5]{col1,col2} */
            parser->p[0] != '\n') {
        parser->p++;
    }

    char *end = parser->p;

    /* Trim trailing whitespace. */
    while (start < end && isspace((unsigned char) * start)) 
        start++;
    while (end > start && isspace((unsigned char) * (end - 1)))
        end--;

    *len = end - start;
    return start;
}

/* Parse the array size from [N] notation. Returns -1 if not an array. */
int parseArraySize(toonParser *parser) {
    int size = -1;
    if (parser->p[0] == '[') {
        parser->p++; /* Skip '[' */
        if (isdigit((unsigned char)parser->p[0])) {
            size = atoi(parser->p);
            while (isdigit((unsigned char)parser->p[0])) parser->p++;
        }
        if (parser->p[0] == ']') 
            parser->p++; /* Skip ']' */
    }
    return size;
}

/* Parse column names from {col1,col2,col3} notation for tabular data.
 * Returns an array of column name strings and sets col_count. */
char **parseTableColumns(toonParser *parser, int *col_count) {
    *col_count = 0;
    
    if (parser->p[0] != '{') return NULL;
    parser->p++; /* Skip '{' */
    
    /* First pass: count columns by counting commas. */
    char *temp = parser->p;
    int count = 1;
    while (*temp && *temp != '}') {
        if (*temp == ',') count++;
        temp++;
    }

    if (*temp != '}') {
        fprintf(stderr, "Syntax error: missing '}' in table columns\n");
        return NULL;
    }
    
    /* Allocate space for column names. */
    char **columns = tmalloc(sizeof(char *) * count);
    int idx = 0;
    
    /* Second pass: extract each column name. */
    while (parser->p[0] && parser->p[0] != '}') {
        char *start = parser->p;
        while (parser->p[0] && parser->p[0] != ',' && parser->p[0] != '}') {
            parser->p++;
        }
        
        size_t len = parser->p - start;
        
        if (idx >= count) {
            for (int i = 0; i < idx; i++)
                tfree(columns[i]);
            tfree(columns);
            return NULL;
        }

        columns[idx] = tmalloc(len + 1);
        memcpy(columns[idx], start, len);
        columns[idx][len] = '\0';
        idx++;
        
        if (parser->p[0] == ',') parser->p++; /* Skip comma */
    }
    
    if (parser->p[0] == '}') parser->p++; /* Skip '}' */
    
    *col_count = count;
    return columns;
}

/* Check if a string represents a number. Sets is_float to 1 if it's a
 * floating point number (has decimal point or scientific notation).
 * Supports: 123, -456, 3.14, -2.5, 1.5e10, -3e-5 */
int isNumber(char *s, size_t len, int *is_float) {
    if (len == 0) return 0;

    size_t i = 0;
    *is_float = 0;
    
    /* Optional sign. */
    if (s[i] == '-' || s[i] == '+') i++;

    /* Must have at least one digit. */
    if (i >= len || !isdigit((unsigned char)s[i])) return 0;

    /* Parse integer part. */
    while (i < len && isdigit((unsigned char)s[i])) i++;

    /* Optional decimal point and fractional part. */
    if (i < len && s[i] == '.') {
        *is_float = 1;
        i++;
        /* Must have at least one digit after the decimal point. */
        if (i >= len || !isdigit((unsigned char)s[i])) return 0;
        while (i < len && isdigit((unsigned char)s[i])) i++;
    }

    /* Optional scientific notation (e.g., 1.5e10 or 3e-5). */
    if (i < len && (s[i] == 'e' || s[i] == 'E')) {
        *is_float = 1;
        i++;
        if (i < len && (s[i] == '+' || s[i] == '-')) i++;
        if (i >= len || !isdigit((unsigned char)s[i])) return 0;
        while (i < len && isdigit((unsigned char)s[i])) i++;
    }

    return i == len; /* Success if we consumed the entire string */
}

toonObject *parseNumber(char *start, size_t len, int is_float) {
    char buf[128];
    if (len >= sizeof(buf)) {
        /* number too long */
        return newStringObj(start, len);
    }

    memcpy(buf, start, len);
    buf[len] = '\0';

    if (is_float) {
        errno = 0;
        char *endptr;
        double val = strtod(buf, &endptr);

        if (errno == ERANGE || endptr != buf + len) {
            /* Overflow or incomplete parsing */
            return newStringObj(start, len);
        }

        return newDoubleObj(val);
    }

    errno = 0;
    char *endptr;
    long val = strtol(buf, &endptr, 10);

    if (errno == ERANGE || val > INT_MAX || val < INT_MIN || endptr != buf + len) {
        /* Overflow or out of bounds int */
        return newStringObj(start, len);
    } 

    return newIntObj((int)val);
}

/* Parse a single value from the input. Values are terminated by newline
 * or comma (for array elements). Returns NULL for empty values, which
 * indicates a nested object follows. */
toonObject *parseValue(toonParser *parser) {
    parseSpaces(parser);

    /* Empty value means nested object. */
    if (parser->p[0] == '\n' || parser->p[0] == '\0') {
        return NULL;
    }

    char *start = parser->p;

    /* Scan to end of value (newline or comma). */
    while (parser->p[0] &&
            parser->p[0] != '\n' &&
            parser->p[0] != ',' &&
            parser->p[0] != '#')
        parser->p++;

    char *end = parser->p;
    
    if (parser->p[0] == '#') {
        while (parser->p[0] && parser->p[0] != '\n') {
            parser->p++;
        }
    }

    /* Trim whitespace from both ends. */
    while (start < end && isspace((unsigned char) * start)) start++;
    while (end > start && isspace((unsigned char) * (end - 1))) end--;
    
    size_t len = end - start;

    /* Check for quoted strings. */
    int quotes = 0;
    if (len >= 2 && *start == '"' && *(end - 1) == '"') {
        start++;
        end--;
        len -= 2;
        quotes = 1;
    }
    
    /* Quoted values are always strings. */
    if (quotes) 
        return newStringObj(start, len);

    if (len == 0) return newNullObj();

    /* Check for boolean literals. */
    if (len == 4 && strncmp(start, "true", 4) == 0) {
        return newBoolObj(1);
    }
    if (len == 5 && strncmp(start, "false", 5) == 0) {
        return newBoolObj(0);
    }
    
    /* Check for null literal. */
    if (len == 4 && strncmp(start, "null", 4) == 0) {
        return newNullObj();
    }
    
    /* Try to parse as a number. */
    int is_float;
    if (isNumber(start, len, &is_float)) {
        return parseNumber(start, len, is_float);
    }
    
    /* Default: treat as unquoted string. */
    return newStringObj(start, len);
}

/* Parse a comma-separated list of values on a single line.
 * Example: friends[3]: ana,luis,sam */
toonObject *parseListValues(toonParser *parser) {
    toonObject *arr = newListObj();

    while (parser->p[0] && parser->p[0] != '\n') {
        toonObject *item = parseValue(parser);
        if (item) listPush(arr, item);
        
        if (LIKELY(parser->p[0] == ',')) {
            parser->p++; /* Skip comma */
        } else {
            break; /* End of list */
        }
    }

    /* If comment is found skip the rest of the line */
    if (parser->p[0] == '#') {
        while (parser->p[0] && parser->p[0] != '\n')
            parser->p++;
    }

    return arr;
}

/* Parse tabular data where each row is on its own line with comma-separated
 * values. Each row becomes an object with properties named after the columns.
 * Example:
 *   hikes[3]{id,name,distance}:
 *     1,Blue Lake,7.5
 *     2,Ridge Overlook,9.2
 */
toonObject *parseTableRows(toonParser *parser, char **columns, int col_count,
        int expected_rows) {
    toonObject *table = newListObj();
    
    for (int row = 0; row < expected_rows; row++) {
        parseNewLine(parser);
      
        /* Check for EOF */
        //if (parser->p[0] == '\0') break;
        /* Skip blank lines and comments */
        if (isCommentOrEmpty(parser)) {
            skipLine(parser);
            continue;
        }

        /* EOF */
        if (parser->p[0] == '\0')
            break;
        parseSpaces(parser);

        /* End of data or empty line terminates the table. */
        //if (parser->p[0] == '\n' || parser->p[0] == '\0') break;

        if (parser->p[0] == '#') {
            skipLine(parser);
            continue;
        }
        
        /* Create an object for this row. */
        toonObject *rowObj = newObject(KV_OBJ);
        toonObject *lastProp = NULL;
        
        /* Parse each column value. */
        for (int col = 0; col < col_count; col++) {
            toonObject *value = parseValue(parser);
            if (value) {
                /* Assign the column name as the property key. */
                value->key = tmalloc(strlen(columns[col]) + 1);
                strcpy(value->key, columns[col]);
                value->indent = 1;
                
                /* Link into the row object's property list. */
                if (lastProp == NULL) {
                    rowObj->child = lastProp = value;
                } else {
                    lastProp->next = value;
                    lastProp = value;
                }
            }
            
            /* Skip comma between columns (but not after the last one). */
            if (col < col_count - 1 && parser->p[0] == ',') {
                parser->p++;
            }
        }
        
        listPush(table, rowObj);
    }
    
    return table;
}

/* Check if the current line is a comment (starts with #) or blank. */
FORCE_INLINE int isCommentOrEmpty(toonParser *parser) {
    char *temp = parser->p;

    /* Skip whitespaces */
    while (*temp == ' ' || *temp == '\t') 
        temp++;

    /* Check for inline comments */
    return *temp == '#' || *temp == '\n' || *temp == '\0';
}

/* Skip the rest of the current line. */
FORCE_INLINE void skipLine(toonParser *parser) {
    while (parser->p[0] && parser->p[0] != '\n') 
        parser->p++;
    parseNewLine(parser);
}

/* -----------------------------------------------------------------------------
 * Main parsing logic
 *
 * The parser maintains a stack of parent objects to handle indentation-based
 * nesting. When we encounter a property with no value (empty after the colon),
 * it becomes a parent for subsequent indented properties.
 * -------------------------------------------------------------------------- */

toonObject *parse(char *source) {
    toonParser parser;
    parser.source = source;
    parser.p = source;
    parser.line = 1;

#if 0
    static int iteration = 0;
    iteration++;
    if (iteration > 10000) {
        fprintf(stderr, "DEADLOCK DETECTED at line %d, char '%c' (0x%02x)\n",
                parser.line, parser.p[0] ? parser.p[0] : '?', 
                (unsigned char)parser.p[0]);
        fprintf(stderr, "Position in source: %ld\n", parser.p - parser.source);
        fprintf(stderr, "Context: %.50s\n", parser.p);
        exit(1);
    }
#endif

    /* The root is always an object. */
    toonObject *root = newObject(KV_OBJ);
    
    /* Stack to track parent objects at each indentation level.
     * Max depth of 64 should be more than enough for any reasonable TOON. */
    toonObject **stack = tmalloc(sizeof(toonObject *) * 64);
    int stack_size = 1;
    stack[0] = root;

    while (parser.p[0]) {
        /* Skip blank lines and comments. */
        if (UNLIKELY(isCommentOrEmpty(&parser))) {
            skipLine(&parser);
            continue;
        }

        /* Parse indentation to determine nesting level. */
        int indent = parseIndent(&parser);
        
        /* Parse the property key. */
        size_t keylen;
        char *key = parseKey(&parser, &keylen);
        if (keylen == 0) {
            skipLine(&parser);
            continue;
        }
    
        /* Check for array notation: key[N] */
        int array_size = parseArraySize(&parser);
        
        /* Check for table notation: key[N]{col1,col2,...} */
        int col_count = 0;
        char **columns = NULL;
        if (parser.p[0] == '{') {
            columns = parseTableColumns(&parser, &col_count);
        }

        /* Expect colon after key (and optional array/table notation). */
        if (parser.p[0] != ':') {
            fprintf(stderr, "Syntax error at line %d: expected ':'\n", parser.line);
            /* Clean up column names if we allocated them. */
            if (columns) {
                for (int i = 0; i < col_count; i++) {
                    tfree(columns[i]);
                }
                tfree(columns);
            }
            skipLine(&parser);
            continue;
        }
        parser.p++; /* Skip ':' */
       
        /* Parse the value (or values for tables/arrays). */
        toonObject *prop;
        int has_value = 0;
        
        if (columns) {
            /* Tabular data: parse multiple rows. */
            prop = parseTableRows(&parser, columns, col_count, array_size);
            has_value = 1;
            /* Free column name strings. */
            for (int i = 0; i < col_count; i++) {
                tfree(columns[i]);
            }
            tfree(columns);
        } else if (array_size >= 0) {
            /* Simple array: comma-separated values on one line. */
            prop = parseListValues(&parser);
            has_value = 1;
        } else {
            /* Single value (or empty for nested object). */
            prop = parseValue(&parser);
            has_value = (prop != NULL);
            if (!has_value) {
                /* Empty value: this is a nested object. */
                prop = newObject(KV_OBJ);
            }
        }

        /* Attach the key to the property. */
        prop->key = tmalloc(keylen + 1);
        memcpy(prop->key, key, keylen);
        prop->key[keylen] = '\0';
        prop->indent = indent;

        /* Pop the stack back to the appropriate parent for this indent level.
         * If indent=0, parent is root. If indent=1, parent is the last
         * indent=0 object, and so on. */
        while (stack_size > 1 && stack[stack_size - 1]->indent >= indent)
            stack_size--;

        /* Check for stack bounds */
        if (stack_size <= 0) {
            fprintf(stderr, "Internal error: stack underflow at line %d\n",
                    parser.line);
            stack_size = 1;
        }

        toonObject *parent = stack[stack_size - 1];
        
        /* Add this property to the parent's child list. */
        if (parent->child == NULL) {
            parent->child = prop;
        } else {
            /* Find the last sibling and append. */
            toonObject *sibling = parent->child;
            while (sibling->next) {
                sibling = sibling->next;
            }
            sibling->next = prop;
        }

        /* If this property has no value (is an object), push it onto the
         * stack so subsequent indented properties become its children. */
        if (!has_value && prop->kvtype == KV_OBJ) {
            if (stack_size < 64) {
                stack[stack_size++] = prop;
            } else {
                fprintf(stderr, "Warning: max nesting depth exceeded at line %d\n",
                        parser.line);
            }
        }

        if (parser.p[0] == '\n') {
            parseNewLine(&parser);
        } else if (parser.p[0] == '\0') {
            break;
        } else {
            fprintf(stderr, "Warning: unexpected character '%c' at line %d, skipping\n",
                    parser.p[0], parser.line);
            parser.p++;
        }
    }

    tfree(stack);
    return root;
}

/* -----------------------------------------------------------------------------
 * Query and access functions
 * -------------------------------------------------------------------------- */

/* Get an object by path using dot notation. Example: "context.task"
 * Returns NULL if the path doesn't exist. */
toonObject *TOONc_get(toonObject *root, const char *path) {
    if (!root || !path) return NULL;
    
    /* We need to modify the string for strtok, so make a copy. */
    char *path_copy = strdup(path);
    if (!path_copy) return NULL;
    
    char *token = strtok(path_copy, ".");
    toonObject *current = root;

    /* Navigate through each component of the path. */
    while (token) {
        toonObject *found = NULL;
        toonObject *child = current->child;

        /* Search for a child with this key. */
        while (child) {
            if (child->key && strcmp(child->key, token) == 0) {
                found = child;
                break;
            }
            child = child->next;
        }

        if (!found) {
            free(path_copy);
            return NULL; /* Path doesn't exist */
        }
        
        current = found;
        token = strtok(NULL, ".");
    }
    
    free(path_copy);
    return current;
}

/* -----------------------------------------------------------------------------
 * File and string parsing entry points
 * -------------------------------------------------------------------------- */

/* Parse a TOON file. The file pointer is closed after reading. */
toonObject *TOONc_parseFile(FILE *fp) {
    if (!fp) return NULL;
    
    /* Read entire file into memory. */
    fseek(fp, 0, SEEK_END);
    long file_size = ftell(fp);
    
    if (file_size <= 0) {
        return NULL;
    }
    
    char *source = tmalloc(file_size + 1);
    fseek(fp, 0, SEEK_SET);
    size_t read_size = fread(source, 1, file_size, fp);
    source[read_size] = '\0';
    fclose(fp);

    /* Parse and free the source buffer. */
    toonObject *root = parse(source);
    tfree(source);
    return root;
}

/* Parse a TOON string. */
toonObject *TOONc_parseString(const char *str) {
    if (!str) return NULL;
    
    /* Make a mutable copy since the parser modifies the string. */
    size_t len = strlen(str);
    char *copy = tmalloc(len + 1);
    memcpy(copy, str, len + 1);
    
    toonObject *root = parse(copy);
    tfree(copy);
    return root;
}

/* -----------------------------------------------------------------------------
 * Array querying and manipulation
 * -------------------------------------------------------------------------- */

/* Returns the specified item of the array */
toonObject *TOONc_getArrayItem(toonObject *arr, size_t index) {
    if (!TOON_IS_LIST(arr)) goto error;
    
    size_t len = arr->array.len;
    if (index >= len) goto error;

    return arr->array.items[index];

error:
    return NULL;
}

size_t TOONc_getArrayLength(toonObject *arr) {
    if (!TOON_IS_LIST(arr)) return -1;

    return arr->array.len;
}

/* -----------------------------------------------------------------------------
 * Output and debugging functions
 * -------------------------------------------------------------------------- */

/* Recursively print a TOON object tree for debugging. */
void printObject(toonObject *o, int depth) {
    if (o == NULL) return;

    /* Indent to show nesting level. */
    for (int i = 0; i < depth; i++) printf("  ");

    if (o->key) printf("%s: ", o->key);

    /* Print value based on type. */
    switch (o->kvtype) {
    case KV_STRING:
        printf("\"%s\" (string)", o->str.ptr);
        break;
    case KV_INT:
        printf("%d (integer)", o->i);
        break;
    case KV_DOUBLE:
        printf("%f (double)", o->d);
        break;
    case KV_BOOL:
        printf("%s (boolean)", o->boolean ? "true" : "false");
        break;
    case KV_NULL:
        printf("null (null)");
        break;
    case KV_LIST:
        printf("[");
        for (size_t i = 0; i < o->array.len; i++) {
            toonObject *item = o->array.items[i];

            switch (item->kvtype) {
                case KV_STRING:
                    printf("\"%s\"", item->str.ptr);
                    break;
                case KV_INT:
                    printf("%d", item->i);
                    break;
                case KV_DOUBLE:
                    printf("%f", item->d);
                    break;
                case KV_BOOL:
                    printf("%s", item->boolean ? "true" : "false");
                    break;
                case KV_OBJ:
                    printf("{...}");
                    break;
                default:
                    printf("?");
            }
            if (i < o->array.len - 1) printf(", ");
        }
        printf("] (array)");
        break;
    case KV_OBJ:
        printf("{ (object)");
        break;
    }
    printf("\n");

    /* Recursively print children (properties of this object). */
    if (o->child) 
        printObject(o->child, depth + 1);

    /* Close brace for objects. */
    if (o->kvtype == KV_OBJ && depth > 0) {
        for (int i = 0; i < depth; i++) printf("  ");
        printf("}\n");
    }
    
    /* Print siblings at the same level. */
    if (o->next) {
        printObject(o->next, depth);
    }
}

/* Print from the root (skip the root object itself). */
void printRoot(toonObject *root) {
    if (root && root->child) {
        printObject(root->child, 0);
    }
}

/* Convert a TOON object to JSON format. */
void TOONc_toJSON(toonObject *obj, FILE *fp, int depth) {
    if (!obj || !fp) return;
    
    /* Indent for readability. */
    for (int i = 0; i < depth; i++) fprintf(fp, "  ");
    
    /* Print key if this is a property. */
    if (obj->key) {
        fprintf(fp, "\"%s\": ", obj->key);
    }
    
    /* Print value based on type. */
    switch (obj->kvtype) {
        case KV_STRING:
            fprintf(fp, "\"%s\"", obj->str.ptr);
            break;
        case KV_INT:
            fprintf(fp, "%d", obj->i);
            break;
        case KV_DOUBLE:
            fprintf(fp, "%f", obj->d);
            break;
        case KV_BOOL:
            fprintf(fp, "%s", obj->boolean ? "true" : "false");
            break;
        case KV_NULL:
            fprintf(fp, "null");
            break;
        case KV_LIST:
            /* Arrays are enclosed in brackets. */
            fprintf(fp, "[\n");
            for (size_t i = 0; i < obj->array.len; i++) {
                TOONc_toJSON(obj->array.items[i], fp, depth + 1);
                if (i < obj->array.len - 1) fprintf(fp, ",");
                fprintf(fp, "\n");
            }
            for (int i = 0; i < depth; i++) fprintf(fp, "  ");
            fprintf(fp, "]");
            break;
        case KV_OBJ:
            /* Objects are enclosed in braces. */
            fprintf(fp, "{\n");
            if (obj->child) {
                toonObject *child = obj->child;
                while (child) {
                    TOONc_toJSON(child, fp, depth + 1);
                    if (child->next) fprintf(fp, ",");
                    fprintf(fp, "\n");
                    child = child->next;
                }
            }
            for (int i = 0; i < depth; i++) fprintf(fp, "  ");
            fprintf(fp, "}");
            break;
    }
}

/* -----------------------------------------------------------------------------
 * Cure API function aliases
 *
 * Some function aliases for internal helpers.
 * -------------------------------------------------------------------------- */

/* Public utility functions */

void TOONc_printRoot(toonObject *root) {
    printRoot(root);
}

void TOONc_printObject(toonObject *o, int depth) {
    printObject(o, depth);
}

/* Public object creation functions */

toonObject *TOONc_newObject(int kvtype) {
    return newObject(kvtype);
}

toonObject *TOONc_newStringObj(char *s, size_t len) {
    return newStringObj(s, len);
}

toonObject *TOONc_newIntObj(int value) {
    return newIntObj(value);
}

toonObject *TOONc_newDoubleObj(double value) {
    return newDoubleObj(value);
}

toonObject *TOONc_newBoolObj(int value) {
    return newBoolObj(value);
}

toonObject *TOONc_newNullObj(void) {
    return newNullObj();
}

toonObject *TOONc_newListObj(void) {
    return newListObj();
}

/* Public allocation functions */

void TOONc_listPush(toonObject *list, toonObject *item) {
    listPush(list, item);
}

void *TOONc_malloc(size_t size) {
    return tmalloc(size);
}

void *TOONc_calloc(size_t nmemb, size_t size) {
    return tcalloc(nmemb, size);
}

void *TOONc_realloc(void *ptr, size_t size) {
    return trealloc(ptr, size);
}

/* -----------------------------------------------------------------------------
 * Example usage
 * (see /examples)
 * -------------------------------------------------------------------------- */

#if 0
int main(void) {
    return 0;
}
#endif

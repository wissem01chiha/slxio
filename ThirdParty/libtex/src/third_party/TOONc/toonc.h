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
 */
#ifndef _TOONC_H
#define _TOONC_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>
#include <stdio.h>

/* ===================== Key-value types ======================*/
#define KV_STRING 0
#define KV_INT    1
#define KV_BOOL   2
#define KV_NULL   3
#define KV_DOUBLE 4
#define KV_OBJ    5
#define KV_LIST   6
#define KV_LOBJ   7

/* ======================= Data Structures ======================= */

struct toonStr {
    char *ptr;
    size_t len;
};

typedef struct toonObject {
    int kvtype;
    int indent;
    char *key;
    union {
        struct toonStr str;
        int i;
        double d;
        int boolean;
        
        struct {
            struct toonObject **items;
            size_t len;
            size_t capacity;
        } array;
    };

    struct toonObject *child;
    struct toonObject *next;
} toonObject;

typedef struct toonParser {
    char *source;
    char *p;
    int line;
} toonParser;

/* ======================= Memory Management ======================= */

void *TOONc_malloc(size_t size);
void *TOONc_calloc(size_t nmemb, size_t size);
void *TOONc_realloc(void *ptr, size_t size);

/* ======================= Object Creation ======================= */

toonObject *TOONc_newObject(int kvtype);
toonObject *TOONc_newStringObj(char *s, size_t len);
toonObject *TOONc_newIntObj(int value);
toonObject *TOONc_newDoubleObj(double value);
toonObject *TOONc_newBoolObj(int value);
toonObject *TOONc_newNullObj(void);
toonObject *TOONc_newListObj(void);

void TOONc_listPush(toonObject *list, toonObject *item);

/* ======================= Core API ======================= */

/**
 * Parse a TOON file
 * @param fp File pointer (will be closed by this function)
 * @return Root toonObject or NULL on error
 */
toonObject *TOONc_parseFile(FILE *fp);

/**
 * Parse a TOON string
 * @param str TOON formatted string
 * @return Root toonObject or NULL on error
 */
toonObject *TOONc_parseString(const char *str);

/**
 * Get an object by path (dot notation)
 * @param root Root object
 * @param path Path like "context.task" or "friends"
 * @return Found object or NULL
 */
toonObject *TOONc_get(toonObject *root, const char *path);

/**
 * Get item of an array 
 * @param arr Array object
 * @param index Array index
 * @return The indexed item or NULL 
 */
toonObject *TOONc_getArrayItem(toonObject *arr, size_t index);

/**
 * Get the array length
 * @param arr Array object
 * @return Number (size_t) of items or -1
 */
size_t TOONc_getArrayLength(toonObject *arr);

/**
 * Print recursively an object
 * @param o Generic object
 * @param depth Max indentation depth
 */
void TOONc_printObject(toonObject *o, int depth);

/** 
 * Print from root object (root excluded)
 * @param root Root object
 */
void TOONc_printRoot(toonObject *root);

/**
 * Free a TOON object tree recursively
 * @param obj Object to free
 */
void TOONc_free(toonObject *obj);

/**
 * Convert TOON object to JSON
 * @param obj Object to convert
 * @param fp Output file pointer
 * @param depth Initial indentation depth
 */
void TOONc_toJSON(toonObject *obj, FILE *fp, int depth);

/* ======================= Type Checking Macros ======================= */

#define TOON_IS_STRING(obj)  ((obj) && (obj)->kvtype == KV_STRING)
#define TOON_IS_INT(obj)     ((obj) && (obj)->kvtype == KV_INT)
#define TOON_IS_DOUBLE(obj)  ((obj) && (obj)->kvtype == KV_DOUBLE)
#define TOON_IS_BOOL(obj)    ((obj) && (obj)->kvtype == KV_BOOL)
#define TOON_IS_NULL(obj)    ((obj) && (obj)->kvtype == KV_NULL)
#define TOON_IS_LIST(obj)    ((obj) && (obj)->kvtype == KV_LIST)
#define TOON_IS_OBJ(obj)     ((obj) && (obj)->kvtype == KV_OBJ)

/* ======================= Value Getters ======================= */

#define TOON_GET_STRING(obj) (TOON_IS_STRING(obj) ? (obj)->str.ptr : NULL)
#define TOON_GET_INT(obj)    (TOON_IS_INT(obj) ? (obj)->i : 0)
#define TOON_GET_DOUBLE(obj) (TOON_IS_DOUBLE(obj) ? (obj)->d : 0.0)
#define TOON_GET_BOOL(obj)   (TOON_IS_BOOL(obj) ? (obj)->boolean : 0)

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _TOONC_H */

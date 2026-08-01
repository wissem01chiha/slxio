// SPDX-FileCopyrightText: Copyright (c) Wissem Chiha
// SPDX-License-Identifier: MIT
/*
 * Copyright 2026 Wissem Chiha <chihawissem08@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef NPIO_H
#define NPIO_H

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

    /*==================================================================================================
    *                                SOURCE FILE VERSION INFORMATION
    ==================================================================================================*/

#define NPIO_VERSION_MAJOR 0
#define NPIO_VERSION_MINOR 1
#define NPIO_VERSION_PATCH 0

    /*==================================================================================================
    *                                          INCLUDE FILES
    ==================================================================================================*/

#include <zlib.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <errno.h>

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        DEFINES AND MACROS
==================================================================================================*/

/** no error. */
#define NPIO_OK 0x00

/** has encountered the end of the file. */
#define NPIO_EOF 0x01

/** detected a buffer overflow  */
#define NPIO_EBUF 0x02

/** array dimensions exceed allowed limits. */
#define NPIO_EDIM 0x03

/** failed to read the file */
#define NPIO_EFREAD 0x04

/** failed to open the file */
#define NPIO_EFOPEN 0x05

/** failed to write the file */
#define NPIO_EFWRITE 0x06

/** buffer size is zero */
#define NPIO_EBUF_SIZE_ZERO 0x07

/** null pointer to a buffer  */
#define NPIO_EBUF_NULL 0x08

/** buffer truncated */
#define NPIO_EBUF_TRUNCATED 0x09

/** null pointer to an npio array  */
#define NPIO_EARR_NULL 0x000A

/** dimension exceed allowed npio default */
#define NPIO_EARR_DIM 0x000B

/** null pointer to an npy file descriptor */
#define NPIO_ENPY_NULL 0x000C

/** attempted to read an npy file before it was opened */
#define NPIO_EUNOPENED 0x000D

/** null pointer to an npz file descriptor */
#define NPIO_ENPZ_NULL 0x000E

/** unknown error */
#define NPIO_EUNKNOWN 0x0064

/** maximum number of npy array dimensions */
#define NPY_ARRAY_DIM 8

/** default buffer size for I/O  */
#define NPIO_BUF_SIZE 256

    /*==================================================================================================
    *                                              ENUMS
    ==================================================================================================*/

    /*==================================================================================================
    *                                  STRUCTURES AND OTHER TYPEDEFS
    ==================================================================================================*/

    /** @brief alias for size_t used in APIs */
    typedef size_t npio_size_t;

    /** @brief boolean type for npio  */
    typedef uint8_t npio_bool_t;

    /** @brief unsigned 16‑bit integer type for npio */
    typedef uint16_t npio_uint16_t;

    /** @brief general integer type for npio */
    typedef int npio_int_t;

    /** @brief Type for specifying an error or status code.*/
    typedef int npio_status_t;

    /** @brief Low level Npy file descriptor  */
    /** @note  The .npy file format version is not equal to the numpy python package version
     * refers to the binary storage specification used inside the file, eg 1.0, 2.0, and 3.0
     */
    typedef struct
    {
        FILE       *fp;
        npio_int_t  version_major;
        npio_int_t  version_minor;
        char        dtype[32];
        npio_int_t  fortran_order;
        npio_size_t ndim;
        npio_size_t shape[NPY_ARRAY_DIM];
        npio_size_t header_len;
    } npy_file_t;

    /** @brief Npy array shape type */
    typedef struct
    {
        npio_size_t shape[NPY_ARRAY_DIM];
        npio_size_t ndim;
    } npy_shape_t;

    /** @brief Numpy array data descriptor */
    typedef struct
    {
        char       *data;
        npy_shape_t shape;
        npio_size_t word_size;
        npio_bool_t fortran_order;
        npio_size_t num_vals;
    } np_array_t;

    /** @brief  Array Mapping in npz archive */
    typedef struct
    {
        char      *key;
        np_array_t value;
    } npz_entry_t;

    /** @brief Npz file entries mapping */
    typedef struct
    {
        npz_entry_t *entries;
        npio_size_t  count;
    } npz_t;

    /*==================================================================================================
    *                                  GLOBAL VARIABLE DECLARATIONS
    ==================================================================================================*/

    /*==================================================================================================
    *                                      FUNCTION PROTOTYPES
    ==================================================================================================*/

    /**
     * @brief Return a human readable string describing the specified error.
     * @param statcode The error code to get a string for.
     * @param buf A buffer to hold the error string.
     * @param bufsize Size of the buffer to hold the string.
     * @return The number of characters that would have been written on the buffer, if buffsize had
     * been sufficiently large. If an encoding error occurs, a negative number is returned.
     */
    int npio_strerror(npio_status_t statcode, char *buf, npio_size_t bufsize);

    /**
     * @brief Convert a npio_status_t error code into a human readble string
     * @param statcode Pointer to the status code.
     * @return null pointer if the stacode not supported in npio error list
     */
    const char *npio_error_string(npio_status_t statcode);

    /**
     * @brief Prints a human readable description of an npio error status.
     * @param statcode npio status code.
     * @return void
     * @note This used mainly for debug puropse
     */
    void npio_error_printf(npio_status_t statcode);

    /**
     * @brief check endianness of the host machine
     * @return 0 for big endian, 1 for little endian.
     */
    npio_int_t npio_endian_test(void);

    /**
     * @brief Allocator for np_array_t object
     * @param dims Array of ndim elements each elment is the size of the array along one axis,
     * all values should be >=1 , 0 dimonsions are not allowed in numpy
     * @param ndim Number of array dimensions, must be also >= 1
     * @param word_size The size in bytes of one element (per value) in the array.
     * @param fortran_order array memory layout, numpy usully defaults to 0, c-order, else
     * specified, default in npio librray is also 0
     * @return Pointer to allocated structure
     * @note if a non valid dimonsion value , or number of dims is 0 a null ptr is
     * returned
     */
    np_array_t *np_array_create(const npio_size_t *dims,
                                npio_size_t        ndim,
                                npio_size_t        word_size,
                                npio_bool_t        fortran_order);

    /**
     * @brief  Destructor for np_array_t object
     * @param arr pointer to np_array_t
     * @return void
     */
    void np_array_delete(np_array_t *arr);

    /**
     * @brief Allocator for npy_file_t object
     * @param none
     * @return a pointer to a newly allocted npy_file structure
     */
    npy_file_t *npy_file_create(void);

    /**
     * @brief Destructor for npy_file_t object
     * @param npy_file_t object to free
     */
    void npy_file_delete(npy_file_t *f);

    /**
     * @brief Open an Npy file for reading.
     * @param pfname Path to the file on disk.
     * @param statcode Pointer to the status code.
     * @return Pointer to an npy_file_t structure on success, or NULL on failure.
     * @note If an error occurs while opening or reading the file, statcode is set to
     * NPIO_EFOPEN
     * @warning this function only affect the filesystem handle of nyp_file_t, for reading the
     * complete file metadata use npy_fread()
     */
    npy_file_t *npy_fopen(const char *pfname, npio_status_t *statcode);

    /**
     * @brief Read an numpy array from npy file descriptor
     * @param pnpy pointer to an np_file_t object
     * @return error status flag
     * @note the file shouled be opened using npy_file_open, if not opened, an NPIO_EUNOPENED is
     * returned
     * \x93NUMPY <major> <minor> <header_len>
     */
    npio_status_t npy_fread(npy_file_t *pnpy);

    /**
     * @brief Read a np_array_t object base from npy file
     * @param pnpy pointer to a npy file struct
     * @param statcode Pointer to the status code.
     * @note the file shoule be already open and valid
     * @return a pointer to newlly allocated data struct
     */
    np_array_t *npy_read(npy_file_t *pnpy, npio_status_t *statcode);

    /**
     * @brief Write an npy_file_t base object  to *.npy file on disk
     * @param pnpy pointer to an np_file_t object
     * @param pfname pointer to file
     * @return error status flag
     * @note for reading an npy file from disk see npy_fread
     */
    npio_status_t npy_fwrite(npy_file_t *pnpy, const char *pfname);

    /**
     * @brief load an .npz file into memory, .npz file format is a zipped archive of files named
     * after the variables they contain. this typcillay require zlib librray to read archive npy
     * entries for more information about npz file format look into :
     * https://numpy.org/doc/stable/reference/generated/numpy.savez_compressed.html
     * @param pfname npz filename
     * @param pnpz  pointer to npz_t struct
     */
    npio_status_t npz_fread(const char *pfname, npz_t *pnpz);

    /**
     * @brief load only a given encoded array from the npz file
     * @param pnpz pointer to npz_t struct
     * @param pvarname name of the variable to load from the npz archive
     * @param statcode Pointer to the status code.
     * @return a pointer to a newly allocated np_array_t object, or NULL on failure
     * @note the npz file should be already loaded into memory using npz_fread
     */
    np_array_t *npz_read(const npz_t *pnpz, const char *pvarname, npio_status_t *statcode);

    /**
     * @brief Saves an arra to a .npz file
     * @param pzipname the name of the zip file to create or append to
     * @param pfname the name of the array to save inside the zip file, this
     * @param data pointer to the array data to save
     * @param pshape pointer to the shape of the array to save
     * @param pmode the mode to open the zip file in, either "w" for write or "a" for append,
     * default is "w"
     * @note the .npz file format is a zipped archive of files named after the variables they
     * contain. this typcillay require zlib librray to read archive npy entries for more information
     * about npz file format look into :
     * https://numpy.org/doc/stable/reference/generated/numpy.savez_compressed.html
     */
    npio_status_t npz_fwrite(const char *pfname, const npz_t *pnpz);

    /**
     * @brief Read a zip file and parse its contents
     * @param fp File pointer to the zip file
     * @param nrecs Number of records in the zip file
     * @param global_header_size Size of the global header
     * @param global_header_offset Offset of the global header
     * @return Error status flag
     */
    npio_status_t npio_zip_fread(FILE         *fp,
                                 npio_uint16_t nrecs,
                                 npio_size_t   global_header_size,
                                 npio_size_t   global_header_offset);

#ifdef __cplusplus
}
#endif

#endif // NPIO_H

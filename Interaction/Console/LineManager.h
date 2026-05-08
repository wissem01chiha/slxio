/*
 * Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 * Copyright (C) 2007 - INRIA - Allan CORNET
 *
 * Copyright (C) 2012 - 2016 - Scilab Enterprises
 *
 * This file is hereby licensed under the terms of the GNU GPL v2.0,
 * pursuant to article 5.3.4 of the CeCILL v.2.1.
 * This file was originally licensed under the terms of the CeCILL v2.1,
 * and continues to be available under such terms.
 * For more information, see the COPYING file which you should have received
 * along with this program.
 *
 */
/*--------------------------------------------------------------------------*/
#ifndef __SCILINES_H__
#define __SCILINES_H__

#include "machine.h" /* C2F */
#include "BOOL.h"
#include "dynlib_console.h"

/**
* set number of lines and columns to display data
* @param[in] number of lines
* @param[in] number of columns
* @return 0
*/
CONSOLE_IMPEXP int scilines(int nl, int nc);

/**
* set default number of lines and columns to display data
* @return 0
*/
CONSOLE_IMPEXP int scilinesdefault(void);

/**
* set number of lines and columns to display data (C2F version)
* @param[in] number of lines
* @param[in] number of columns
* @return 0
*/
CONSOLE_IMPEXP int C2F(scilines)(int *nl, int *nc);

/**
* set default number of lines and columns to display data (C2F version)
* @return 0
*/
CONSOLE_IMPEXP int C2F(scilinesdefault)(void);

#endif /* __SCILINES_H__ */
/*--------------------------------------------------------------------------*/

#ifndef __MORE_H__
#define __MORE_H__

#include "dynlib_console.h"

/**
* do a "more"
* @return 0 or 1
*/
CONSOLE_IMPEXP int linesmore(void);

#endif /*  __MORE_H__ */
/*--------------------------------------------------------------------------*/
#ifndef _GETNBRLINE_H
#define _GETNBRLINE_H

#include <wchar.h>

/**
 * Get how may lines the string take in the window.
 * @param string whose number of line will be counted
 * @return number of line used by the string.
 */
int getNbrLine(wchar_t * str);

#endif /* !_GETNBRLINE_H */

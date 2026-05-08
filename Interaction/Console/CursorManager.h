

#ifndef	GOTO_FUNC_H_
#define	GOTO_FUNC_H_

#include <wchar.h>

/**
 * Move the cursor to the right.
 * @param Current edited line
 * @param cursor location in the command line.
 * @return user Input
 */
int gotoRight(wchar_t * CommandLine, unsigned int *cursorLocation);

/**
 * Move the cursor to the left.
 * @param Current edited line
 * @param cursor location in the command line.
 * @return user Input
 */
int gotoLeft(wchar_t * CommandLine, unsigned int *cursorLocation);

/**
 * Move the cursor to the end of the current edited line.
 * @param Current edited line
 * @param cursor location in the command line.
 * @return user Input
 */
int endLine(wchar_t * CommandLine, unsigned int *cursorLocation);

/**
 * Move the cursor to the beginning of the current edited line.
 * @param Current edited line
 * @param cursor location in the command line.
 * @return user Input
 */
int begLine(wchar_t * CommandLine, unsigned int *cursorLocation);

/**
 * Move cursor to the beginning of the next word or to the end of the string if none were found.
 * @param current edited line
 * @param cursor location in the command line.
 * @return user Input
 */
int nextWord(wchar_t * CommandLine, unsigned int *cursorLocation);

/**
 * Move cursor to the beginning of the prev word or to the beginning of the string if none were found.
 * @param current edited line
 * @param cursor location in the command line.
 * @return user Input
 */
int previousWord(wchar_t * CommandLine, unsigned int *cursorLocation);

#endif /* !GOTO_FUNC_H_ */


#ifndef _GETPIPELINE_H_
#define _GETPIPELINE_H_

#include "dynlib_console.h"
/**
* getPipeLine function
* @return characters read from stdin when stdin is not a tty
* ie: echo "1+1" | bin/scilab -nwni
*/
CONSOLE_IMPEXP char* getPipeLine(void);

#endif /* _GETPIPELINE_H_ */

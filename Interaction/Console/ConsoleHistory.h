#ifndef HISTORY_H_
#define HISTORY_H_

#include <wchar.h>

/**
 * Change current editing line to prev editing line
 * @param list of all command lines.
 * @param cursor location in the command line.
 * @return user input
 */
int previousCmd(wchar_t ** cmd, unsigned int *cursorLocation);

/**
 * Change current editing line to next editing line
 * @param list of all command lines.
 * @param cursor location in the command line.
 * @return user input
 */
int nextCmd(wchar_t ** cmd, unsigned int *cursorLocation);

#endif /* !HISTORY_H_ */
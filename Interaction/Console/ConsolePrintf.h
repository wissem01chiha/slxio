
#ifndef __CONSOLEPRINTF_H__
#define __CONSOLEPRINTF_H__
/*--------------------------------------------------------------------------*/
#include "dynlib_console.h"
/*--------------------------------------------------------------------------*/
/**
* ConsolePrintf function
* @param a string to display
* @return total number of characters written is returned.
*/
CONSOLE_IMPEXP int ConsolePrintf(const char *line);
/*--------------------------------------------------------------------------*/
#endif /* __CONSOLEPRINTF_H__ */

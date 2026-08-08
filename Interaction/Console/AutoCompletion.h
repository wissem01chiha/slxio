
#ifndef AUTO_COMPLETION_CLI_H_
#define AUTO_COMPLETION_CLI_H_

#define WK_BUF_SIZE 520
#define GET_MAX(x, y) (x) > (y) ? (x) : (y)

/**
 * Manage auto completion in NW/NWNI console.
 * @param pointer to Command line currently edited.
 * @param Cursor position in command line.
 */
void autoCompletionInConsoleMode(wchar_t** commandLine,
                                 unsigned int* cursorLocation);

#endif /* !AUTO_COMPLETION_CLI_H_ */

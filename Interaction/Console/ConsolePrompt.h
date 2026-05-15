

#ifndef __SETCONSOLEPROMPT_H__
#define __SETCONSOLEPROMPT_H__
/*--------------------------------------------------------------------------*/
#include "dynlib_console.h"
#include "BOOL.h"
/**
* SetConsolePrompt function
* @param Sci_prompt new prompt to use for Scilab
* @return true ifthe prompt has been correcty set
*/
CONSOLE_IMPEXP BOOL SetConsolePrompt(const char *Sci_prompt);

/*--------------------------------------------------------------------------*/


/* Token to indicate printPrompt what to do */

/* Display the prompt */
#define WRITE_PROMPT	1
/* Don't display the prompt */
#define NOWRITE_PROMPT -1

/**
 * Save a prompt.
 * @param prompt that will be saved
 * or NULL if you don't want to saved any prompt
 * @return last saved prompt
 */
wchar_t *setPrompt(wchar_t *);

/**
 * Get the current saved prompt.
 * @param token to indicate if prompt must be displayed or not
 * @return size of the prompt.
 */
int printPrompt(int);
#endif /* __SETCONSOLEPROMPT_H__ */


#ifndef GET_KEY_H_
#define GET_KEY_H_

#define CHECK_TOKEN -1
#define CONTINUE_COMMAND 0
#define RESET_TOKEN 0
#define SEND_COMMAND 1
#define SEND_MULTI_COMMAND 2
#define DO_NOT_SEND_COMMAND 3

/**
 * Wait for user user input and Manage all the command line.
 * Function is left when the user press enter.
 * @return command line enter by the user.
 */
char *getCmdLine(void);

/**
 * Set a token to know what to do during command line edition.
 * @param token to set.
 * @return token saved.
 */
int setTokenInteruptExecution(int token);

/**
 * Get the token to know if the line must be edited.
 * @return token saved.
 */
int getTokenInteruptExecution();

int getTokenInteruptExecution(void);

#endif /* !GET_KEY_H_ */

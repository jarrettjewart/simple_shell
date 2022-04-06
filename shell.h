#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <limits.h>
#include <dirent.h>
#include <errno.h>

/**
 * struct general_s - struct for shell
 * @isInteractive: flag for interactive mode
 * @_env: environment var
 * @bufferTokens: buffer for the tokens
 * @nonInteractiveBuffer: buffer for user input in NonInteractive mode
 * @interactiveBuffer: buffer for user input in Interactive mode
 * @builtins: table of builtins
 * @nCommands: number of commands run by user
 */
typedef struct general_s
{
	unsigned int isinteractive;
	unsigned int ncommands;
	char **_env;
	char **buffertokens;
	char *noninteractivebuffer;
	char *interactivebuffer;
	builtins_t *builtins;
} general_t;

//main function//
int main(int argc, int **argv, char **env);

//prompt prototype//
void print_prompt (char *prompt);

//Prototypes for string functions//
ssize_t _puts(char *str);
char *_strdup(char *strtodup);
int _strcmpr(char *strcmp1, char *strcmp2);
char *_strcat(char *strcat1, char strcat2);
unsigned int _strlen(char *str);


void print_prompt (char *prompt);
int _strlen(char *s);
void _print_env(void);
char **delim(char *cm, char *del);
char **tokenize(char *str, char *delim, general_t *genHead)























#endif

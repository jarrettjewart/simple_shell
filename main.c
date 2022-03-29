#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "shell.h"

/**
 * main - main function to setup the loop for shell
 * @argc: argc
 * @argv: argv
 * Return: 1
 */



int main(int argc, char **argv, char **env)
{
	char *buf;
	ssize_t charread;
	general_t genhead = NULL;

	argc = argc;
	argv = argv;

	genhead = initstruct(env);
	initbuiltin(genhead);

	if (isatty(STDIN_FILENO))
	{
		genhead->isinteractive = 1;
		interactiveshell(genhead);
	}
	else
	{
		buf = malloc(1024 * sizeof(char));
		if (buf == NULL)
			exit(12);
		addmemnibuffer(genhead, buf);
		charsread = read(0, buf, 1024);
		if (charsread == -1)
			exit(EXIT_FAILURE);
		else
		{
			genhead->isinteractive = 0;
			noninteractiveshell(buf, genhead);
		}
	}
	return (0);
}

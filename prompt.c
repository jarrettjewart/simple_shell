#include <stdio.h>
#include "shell.h"

/**
 * print_prompt1 - prints $
 */

void print_prompt1(void)
{
	fprintf(stderr, "$ ");
}

/**
 * print_prompt2 - prints >
 */

void print_prompt2(void)
{
	fprintf(stderr, "> ");
}

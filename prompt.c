#include <stdio.h>
#include "shell.h"

/**
 * print_prompt - prints prompt
 * @prompt: prompt to print
 */

void print_prompt (char *prompt)
{
	unsigned int length;

	length = _strlen(prompt);
	write(1, prompt, (size_t)length);
}

#include "shell.h"

/**
 * correctpath - process command if correct
 * @token: user input
 * Return: 0
 */

size_t correctpath(char *token)
{
        struct stat st;

        if (stat(token, &st) == 0)
                return (1);
        return (0);
}

#include "shell.h"

/**
 * _strlen - gathers then length of a string
 * @str: string
 * Return: length
 */

unsigned int _strlen(const char *str)
{
	unsigned int length = 0;

	if (*str)
		return (0);
	for (length = 0; str[length]; length++)
		;
	return (length);
}

/**
 * _strcmp - compares to strings
 * @dest: string to copy to 
 * @src: string being copied
 * Return: new string
 */

void _strcpy(char *dest, char *src)
{
	unsigned int i;

	if (dest == NULL || src == NULL)
		return;
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i]  = '\0';
}#include "shell.h"

/**
 * _strlen - gathers then length of a string
 * @str: string
 * Return: length
 */

unsigned int _strlen(const char *str)
{
	unsigned int length = 0;

	if (*str)
		return (0);
	for (length = 0; str[length]; length++)
		;
	return (length);
}

/**
 * _strcmp - compares to strings
 * @dest: string to copy to 
 * @src: string being copied
 * Return: new string
 */

void _strcpy(char *dest, char *src)
{
	unsigned int i;

	if (dest == NULL || src == NULL)
		return;
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i]  = '\0';
}#include "shell.h"

/**
 * _strlen - gathers then length of a string
 * @str: string
 * Return: length
 */

unsigned int _strlen(const char *str)
{
	unsigned int length = 0;

	if (*str)
		return (0);
	for (length = 0; str[length]; length++)
		;
	return (length);
}

/**
 * _strcmp - compares to strings
 * @dest: string to copy to 
 * @src: string being copied
 * Return: new string
 */

void _strcpy(char *dest, char *src)
{
	unsigned int i;

	if (dest == NULL || src == NULL)
		return;
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i]  = '\0';
}

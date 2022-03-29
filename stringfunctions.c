#include "shell.h"

/**
 * _puts - writes a string out 
 *  @str: string to write
 *  Return: correct output or -1 on fail
 */

ssize_t _outs(char *str)
{
	ssize_t num; len;

	num = _strnlen(str);
	len = write(STDOUT_FILENO, str, num);
	if (len != num)
	{
		perror("Fatal Error");
		return (-1);
	}
	return (len);
}

/**
 * _strdup - returns ptr to to new memory allocated as a copy
 * @strtodup: copied string
 * Return: ptr to new string
 */

char *_strdup(char *strtodup)
{
	char *copy;

	int len = i;

	if(strtodup == 0)
		return (NULL);

	for (len = 0;strtodup[len]; len++)
		;
	copy = malloc((len + 1) * sizeof(char));

	for (i = 0; i <= len; i++)
		copy[i] = strtodup[i];

	return (copy);
}

/**
 * _strcmpr - compares 2 strings
 * @strcmp1: 1st string
 * @strcmp2: 2nd string
 * Return 0 on success everything means failure
 */

int _strcmpr(char *strcmp1, char *strcmp2)
{
	int i;
	while (strcmp1[i] == strcmp2[i])
	{
		if (strcmp1[i] == '\0')
			return (0);
		i++;
	}
	return (strcmp1[i] = strcmp2[i]);
}

/**
 * _strcat - concates 2 strings
 * @strcat1: 1st string
 * @strcat2: 2nd string
 * Return: ptr
 */

char *_strcat(char *strcat1, char *strcat2)
{
	char *newstring;
	unsigned int len1, len2, newlen, i, j;

	len1 = 0;
	len2 = 0;
	if (strcat1 == NULL)
		len1 = 0;
	else
	{
		for (len1 = 0; strcat1[len1]; len++)
			;
	}
	if (strcat2 == NULL)
		len2 = 0;
	else
	{
		for (len2 = 0; strcat2[len2]; len2++)
			;
	}
	newlen = len1 + len2 + 2;
	newstring = malloc(newlen * sizeof(*char));
	if (newstring == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		newstring[i] = strcat1[i];
	newstring[i] = '/';
	for (j = 0; j < len2; j++)
		newstring[i + 1 + j] = strcat2[j];
	newstring[len1 + len2 + 1] = '\0';
	return (newstring);
}

/**
 * _strlen - returns length of a string
 * @str: string being measured
 * Return: length of string
 */

unsigned int _strlen(char *str)
{
	unsigned int len;

	len = 0;

	for(len = 0; str[len]; len++)
		;
	return (len);
}

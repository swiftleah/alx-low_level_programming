#include "main.h"

/**
 * _strdup - returns ptr to allocated memory space containing copy of given string
 * @str: string specified
 *
 * Return: ptr, NULL if otherwise.
 */

char *_strdup(char *str)
{
	char *cpy;
	size_t length;

	if (*str == NULL)
	{
		return (NULL);
	}

	length = strlen(str) + 1;
	cpy = (char *)malloc(sizeof(length));

	if (cpy != NULL)
	{
		memcpy(cpy, str, length);
		free(cpy);
	}

	return (0);
}


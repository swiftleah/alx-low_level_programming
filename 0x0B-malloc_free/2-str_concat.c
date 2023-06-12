#include "main.h"

/**
 * str_concat - takes two strings and turns them into one
 * @s1: string 1
 * @s2: string 2
 *
 * Return: ptr to the new single string or NULL upon failure.
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int size = len1 + len2 + 1;

	char *ptr = calloc(size, sizeof(char));

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (ptr != NULL)
	{
		memcpy(ptr, s1, len1);
		memcpy(ptr + len1, s2, len2);
		ptr[size - 1] = '\0';
	}

	return (ptr);
}

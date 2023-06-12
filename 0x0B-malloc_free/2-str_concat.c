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
	int i;
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
	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		ptr[len1 + i] = s2[i];
	}

	ptr[size - 1] = '\0';

	return (ptr);
}

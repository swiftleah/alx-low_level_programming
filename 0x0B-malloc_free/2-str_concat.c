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
	char *ptr;

	size_t str1 = strlen(s1);
	size_t str2 = strlen(s1);

	ptr = (char *)malloc((str1 + str2 + 1) * sizeof(char));

	if (ptr != NULL)
	{
		strncpy(ptr, s1, str1);
		strncpy(ptr + str1, s2, str2);
	}

	return (ptr);
}


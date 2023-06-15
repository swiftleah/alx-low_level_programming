#include "main.h"

/**
 * string_nconcat - concatenates two given strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes
 *
 * Return: NULL if failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	unsigned int total;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	total = len1 + n;

	result = (char *)malloc((total + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);

	strncat(result, s2, n);

	return (result);
}

#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: parameter 1
 * @src: parameter 2
 *
 * Return: nothing.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}

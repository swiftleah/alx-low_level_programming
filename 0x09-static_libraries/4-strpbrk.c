#include "main.h"

/**
 * _strpbrk - program
 * @s: parameter
 * @accept: parameter
 *
 * Return: 0 if successful.
 */

char *_strpbrk(char *s, char *accept)
{
	int k;


	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}

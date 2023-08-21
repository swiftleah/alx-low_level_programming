#include "main.h"
/**
 * _strpbrk - func
 * @s: pointer
 * @accept: pointer
 * Return: char
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

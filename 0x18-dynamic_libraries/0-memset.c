#include "main.h"
/**
 * _memset - func
 * @s: pointer
 * @b: char
 * @n: int
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

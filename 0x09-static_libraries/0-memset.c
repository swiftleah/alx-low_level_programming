#include "main.h"

/**
 * _memset - fills a memory block with specified value
 * @s: memory address starting point
 * @b: specified value of memory to allocate
 * @n: number of bytes
 *
 * Return: changed array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}

#include "main.h"
/**
 * _memcpy - func
 * @dest: pointer
 * @src: p
 * @n: int
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

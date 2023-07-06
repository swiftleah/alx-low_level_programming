#include "main.h"
/**
 * set_bit - sets bit to 1 at given index
 * @n: int
 * @index: index starting from 0
 * Return: 1 if successful, -1 upon failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}

	mask = 1UL << index;

	*n |= mask;
	return (1);
}

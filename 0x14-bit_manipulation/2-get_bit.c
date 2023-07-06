#include "main.h"
/**
 * get_bit - returns value of bit at given index
 * @n: int
 * @index: index starting from 0
 *
 * Return: value or -1 upon error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	bit = n & mask;
	return ((bit != 0) ? 1 : 0);
}

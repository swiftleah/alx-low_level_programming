#include "main.h"
/**
 * endianness - checks endianness of system
 *
 * Return: int
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *b = (char *)&num;

	return ((int)(*b));
}

#include "main.h"
/**
 * print_binary - prints binary rep of int
 * @n: int
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar('0' + (n & 1));
}

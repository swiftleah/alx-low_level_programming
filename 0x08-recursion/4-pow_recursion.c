#include "main.h"

/**
 * _pow_recursion - returns x to the power of y
 * @x: parameter 1
 * @y: parameter 2
 *
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	if (x == 0)
	{
		return (0);
	}

	else if (y < 0)
	{
		return (-1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

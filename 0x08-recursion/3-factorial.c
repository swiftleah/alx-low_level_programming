#include "main.h"

/**
 * factorial - returns factorial of n
 * @n: number specified
 *
 * Return: -1 if n < 0, otherwise returns factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}

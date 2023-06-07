#include "main.h"

/**
 * _sqrt_checker - checks if a number is a square root
 * @n: number to be checked
 * @start: parameter 1
 * @end: parameter 2
 *
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_check(int n, int start, int end)
{
	int m = (start + end) / 2;
	int i = m * m;

	if (start > end)
	{
		return (-1);
	}

	if (i == n)
	{
		return (m);
	}

	else if (i < n)
	{
		return (_sqrt_check(n, m + 1, end));
	}

	else
	{
		return (_sqrt_check(n, start, m - 1));
	}
}

int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}

	if (n == 0)
	{
		return (0);
	}

	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_check(n, 0, n));
}

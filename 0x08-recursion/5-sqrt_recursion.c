#include "main.h"

/**
 * _sqrt_check - checks if a number is a square root
 * @n: number to be checked
 * @start: parameter 1
 * @end: parameter 2
 *
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_check(int n, int start, int end)
{
	int m = start + (end - start) / 2;

	if (start > end)
	{
		return (-1);
	}

	if (m == n / m && n % m == 0)
	{
		return (m);
	}

	else if (m > n / m)
	{
		return (_sqrt_check(n, start, m - 1));
	}

	else
	{
		return (_sqrt_check(n, m + 1, end));
	}
}

/**
 * _sqrt_recursion - checks if n has natural sqaure root
 * @n: number to be checked
 *
 * Return: -1 if no natural square root.
 */

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

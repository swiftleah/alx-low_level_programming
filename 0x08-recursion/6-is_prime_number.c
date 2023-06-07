#include "main.h"

/**
 * if_prime - returns 1 if input int is a prime number, returns 0 if otherwise
 * @n: number to check if prime number or not
 * @i: divisor
 *
 * Return: 1 if prime number, 0 if else.
 */

int if_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if (i == 1)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	else
	{
		return (if_prime(n, i - 1));
	}
}

/**
 * is_prime_number - returns 1 if n is a prime number, returns 0 if otherwise
 * @n: number to check if prime number
 *
 * Return: 1 if true, 0 if not
 */

int is_prime_number(int n)
{
	return (if_prime(n, n - 1));
}

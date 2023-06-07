#include "main.h"

/**
 * is_prime_number - returns 1 if input int is a prime number, returns 0 if otherwise
 * @n: number to check if prime number or not
 *
 * Return: 1 if prime number, 0 if else.
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

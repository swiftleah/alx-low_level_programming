#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: parameter
 *
 * Return: result of addition... 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;

	va_list args;
	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	sum = 0;
	i = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}

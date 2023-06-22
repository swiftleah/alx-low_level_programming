#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separator to be printed in between numbers
 * @n: number of integers
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (separator == NULL || n <= 0)
	{
		va_end(args);
		return;
	}
	num = 0;

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}


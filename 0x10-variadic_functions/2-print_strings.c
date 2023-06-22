#include "variadic_functions.h"

/**
 * print_strings - prints a string, followed by a new line
 * @separator: ',' to be printed between strings
 * @n: number of strings
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list args;

	va_start(args, n);

	if (separator == NULL || n <= 0)
	{
		va_end(args);
		return;
	}

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}


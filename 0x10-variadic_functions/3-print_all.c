#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: types of arguments passed to function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;

	int i = 0;
	char count;
	char *s;

	va_start(args, format);

	while (format[i] != '\0')
	{
		count = format[i];

		if (count == 'c')
		{
			printf("%c ", va_arg(args, int));
		}
		else if (count == 'i')
		{
			printf("%d ", va_arg(args, int));
		}
		else if (count == 'f')
		{
			printf("%f ", va_arg(args, double));
		}
		else if (count == 's')
		{
			s = va_arg(args, char *);

			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s ", s);
			}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

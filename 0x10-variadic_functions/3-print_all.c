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
			printf("%c", va_arg(args, int));
		if (count == 'i')
			printf("%d", va_arg(args, int));
		if (count == 'f')
			printf("%f", va_arg(args, double));
		if (count == 's')
		{
			s = va_arg(args, char *);

			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
		if (format[i + 1] != '\0' && (count == 'c' || count == 'i' ||
					count == 'f' || count == 's'))
		{
			printf(", ");
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: types of arguments passed to function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i;
	char count;
	char *s;
	va_list args;

	va_start(args, format);
	i = 0;

	while (format[i] != '\0')
	{
		count = format[i];
		switch (count)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
			{
				s = va_arg(args, char *);

				if (s == NULL)
				{
					printf("(nil)");
					break;
				}

				printf("%s", s);
				break;
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

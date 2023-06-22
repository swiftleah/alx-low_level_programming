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
					printf("(nil)");
				else
					printf("%s", s);
				break;
				default:
				break;
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
}

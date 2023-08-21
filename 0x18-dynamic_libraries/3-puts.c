#include "main.h"
/**
 * _puts - func
 * @s: p
 * Return: nothing
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}

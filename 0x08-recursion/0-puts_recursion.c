#include "main.h"

/**
 * _puts_recursion - prints string, followed by a new line.
 * @s: pointer to chars to be printed
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

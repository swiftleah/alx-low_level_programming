#include "main.h"
/**
 * _strchr - func
 * @s: pointer
 * @c: char
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

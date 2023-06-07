#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if string is palindrome or not
 * @s: string to be tested
 *
 * Return: 1 if palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		return (1);
	}

	if (len == 1)
	{
		return (1);
	}

	return (palindrome_checker(s, 0, len - 1));
}

/**
 * palindrome_checker - checks if string is a palindrome or not
 * @s: pointer to characters to test
 * @start: start of string
 * @end: end of string
 *
 * Return: 1 if palindrome, 0 if not
 */

int palindrome_checker(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	else if (s[start] == s[end])
	{
		return (palindrome_checker(s, start + 1, end - 1));
	}

	else
	{
		return (0);
	}
}

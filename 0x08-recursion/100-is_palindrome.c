#include "main.h"
#include <string.h>

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0 || len == 1)
	{
		return (1);
	}

	return (palindrome_check(s, 0, len - 1));
}

/**
 * is_palindrome - checks if string is a palindrome or not
 * @s: pointer to characters to test
 *
 * Return: 1 if palindrome, 0 if not
 */

int palindrome_check(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}

	else if (s[left] == s[right])
	{
		return (palindrome_check(s, left + 1, right - 1));
	}

	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _isupper - checks if letters are uppercase or not
 * @c: characters to check if uppercase
 *
 * Return: 0 if successful, 1 if not.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}

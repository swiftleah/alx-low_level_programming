#include "main.h"

/**
 * _isalpha - checks if char is an alphabetic character
 * @c: char to check
 *
 * Return: 1 if alphabetic char, 0 if not.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}


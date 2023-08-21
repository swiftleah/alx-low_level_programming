#include "main.h"
/**
 * _isdigit - func
 * @c: int
 * Return: int
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

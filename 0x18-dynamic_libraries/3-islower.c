#include "main.h"
/**
 * _islower - func
 * @c: int
 * Return: int
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return(1);
	else
		return (0);
}

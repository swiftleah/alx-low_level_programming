#include <stdio.h>
/**
 * add - adds two ints
 * @a: int 1
 * @b: int 2
 * Return: result
 */

int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - subtracts two ints
 * @a: int 1
 * @b: int 2
 * Return: result
 */

int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiplies two ints
 * @a: int 1
 * @b: int 2
 * Return: result
 */

int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - divides two ints
 * @a: int 1
 * @b: int 2
 * Return: result
 */

int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
		return (0);
}
/**
 * mod - modula operation for two ints
 * @a: int 1
 * @b: int 2
 * Return: result
 */

int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
		return (0);
}

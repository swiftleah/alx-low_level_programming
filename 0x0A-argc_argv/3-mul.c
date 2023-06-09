#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 if successful, 1 if not
 */

int main(int argc, char *argv[])
{
	int x = *argv[1];
	int y = *argv[2];

	int mul;
	mul = x * y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	if (x < 0 || y < 0)
	{
		printf("-%d\n", mul);
	}

	else
	{
		printf("%d\n", mul);
	}

	return (0);
}

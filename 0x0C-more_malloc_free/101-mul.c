#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two positive numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: result of multiplication
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int i, j;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 < 0 || num2 < 0)
	{
		exit(98);
	}

	mul = num1 * num2;

	printf("%d\n", mul);

	return (0);
}


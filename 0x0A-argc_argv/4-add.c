#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful, 1 if not
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int num;
	int i;
	int j;
	char *arg;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(arg);
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}

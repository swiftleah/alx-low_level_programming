#include <stdio.h>

/**
 * main - prints all arguments passed to program including program name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	(void)argc;

	if (argv != NULL)
	{
		while (*argv)
		{
			printf("%s\n", *argv);
			argv++;
		}
	}
	return (0);
}

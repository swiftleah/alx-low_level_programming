#include <stdio.h>

/**
 * main - prints number of arguments passed to program
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: number of arguments passed
 */

int main(int argc, char *argv[])
{
	int argcount = argc - 1;

	(void)argv;

	printf("%d\n", argcount);
	return (0);
}

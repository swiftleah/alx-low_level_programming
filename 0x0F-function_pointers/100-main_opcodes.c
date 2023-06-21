#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: opcode
 */
int main(int argc, char *argv[])
{
	int bytes;
	unsigned char *mainadd;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	mainadd = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x ", mainadd[i]);
	}
	printf("\n");
	return (0);
}

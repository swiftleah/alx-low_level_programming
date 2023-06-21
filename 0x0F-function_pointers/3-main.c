#include "3-calc.h"

/**
 * main - main function that performs simple operations
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Upon error: 98, 99, or 100.
 * Upon success: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*op_func)(int, int);
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && (argv[3] == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}

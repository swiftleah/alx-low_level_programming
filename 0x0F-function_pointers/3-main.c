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
	int answer;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

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

	answer = op_func(num1, num2);
	printf("%d\n", answer);

	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * calc_cents - Calculates minimum amount of coins needed to make change
 * @cents: cents 1, 2, 5, 10 and 25
 *
 * Return: number of coins needed.
 */

int main(int argc, char *argv[])
{
	int coins = 0;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}

	while (cents >= 25)
	{
		cents -= 25;
		coins++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		coins++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		coins++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		coins++;
	}
	while (cents >= 1)
	{
		cents -= 1;
		coins++;
	}

	printf("%d\n", coins);
	return (0);
}

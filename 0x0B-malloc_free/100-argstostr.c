#include "main.h"

/**
 * argstostr - concatenates arguments of program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: ptr to new string or NULL upon failure.
 */

char *argstostr(int ac, char **av)
{
	int len = 0;
	int count = 0;
	int i;
	char *result;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	result = (char *)malloc((len + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		strcpy(result + count, av[i]);
		count += strlen(av[i]);
		result[count] = '\n';
		count++;
	}

	result[count] = '\0';

	return (result);
}


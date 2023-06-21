#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int bytes;
	unsigned char *mainadd;
	int i;

	if (argc != 2)
	{
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		return (2);
	}

	mainadd = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%x ", mainadd[i]);
	}
	printf("\n");
	return (0);
}

#include "main.h"
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to string of binary numbers
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i, len;

	if (b == NULL)
	{
		return (0);
	}

	len = strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
		{
			result = result << 1;
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}

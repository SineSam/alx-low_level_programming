#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: address to string containing binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int deci = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		deci = 2 * deci + (b[i] - '0');
	}
	return (deci);
}

#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: binary number to be converted
 * Return: 0 if 1 or more chars are not 0 or 1
 * or char is NULL
 * else unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}
	return (dec_val);
}

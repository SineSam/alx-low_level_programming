#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to search
 * @index: the given index for a bit
 * Return: value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}

#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n:number to be searched
 * @index:index of bit
 * Return: value of bit at index else -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitVal;

	if (index > 63)
		return (-1);

	bitVal = (n >> index) & 1;

	return (bitVal);
}

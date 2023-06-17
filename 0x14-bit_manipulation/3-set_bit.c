#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n:number to be searched
 * @index: index to be searched
 * Return: bit value, else -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}

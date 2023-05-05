#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: integer to be reversed
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}

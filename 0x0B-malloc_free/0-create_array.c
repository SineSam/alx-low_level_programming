#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars
 * @c:char to fill in array
 * @size: array size
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}

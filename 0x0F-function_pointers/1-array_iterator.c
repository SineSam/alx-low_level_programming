#include "function_pointers.h"

/**
 * array_iterator - prints array elem on new line
 * @array:each element of an array
 * @size:size of the array
 * @action:pointer to the function you need to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

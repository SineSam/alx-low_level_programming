#include "search_algos.h"

/**
 * print_array - print array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * Return: void
 */

void print_array(int *array, size_t size)
{
	size_t i;

	if (array == NULL || size == 0)
	{
		return;
	}
	printf("Searching in array: ");

	for (i = 0; i < size; i++)
	{
		if (i == 0)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
	}
	printf("\n");
}
/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: value, If value is not present in array or if array is NULL, your
 * function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		print_array(&array[low], (high - low) + 1);

		if (array[mid] > value)
			return (mid);

		if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}

#include "lists.h"
#include <stdlib.h>

/**
 * list_len - number of elements in a linked list
 * @h: pointer to list_t
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

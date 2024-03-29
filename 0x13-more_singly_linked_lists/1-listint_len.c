#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: the header pointer
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to list_t to be printed
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u]%s\n", h->len, h->str);
		}
		h = h->next;
		s++;
	}
	printf("-> %lu elements\n", s);
	return (s);
}

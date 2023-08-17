#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: pointer to head node
 * @index: index of node to be search
 * Return: nth node else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size = 0;
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp)
	{
		if (index == size)
			return (tmp);
		size++;
		tmp = tmp->next;
	}
	return (NULL);
}

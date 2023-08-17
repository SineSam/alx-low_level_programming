#include "lists.h"

/**
 * add_dnodeint_end - adds node at end of linked list
 * @head: pointer to head node
 * @n: value of element in new node
 * Return: address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
		*head = new;
	new->prev = h;

	return (new);
}

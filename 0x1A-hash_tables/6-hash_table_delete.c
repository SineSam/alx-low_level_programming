#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *n;

	if (ht == NULL)
		return;

	for (j = 0; j < ht->size; j++)
	{
		n = ht->array[j];
		free_hash_list(n);
	}
	free(ht->array);
	free(ht);
}

/**
 * free_hash_list - frees hash_node_list
 * @head: head of linked list
 * Return: void
 */

void free_hash_list(hash_node_t *head)
{
	hash_node_t *current;
	hash_node_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}
}

#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: key
 * @size: size of array of hash table
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}

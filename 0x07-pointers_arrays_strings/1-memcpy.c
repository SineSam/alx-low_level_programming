#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: Destination memory area
 * @src: source memory area
 * @n: bytes of memory to be copied
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

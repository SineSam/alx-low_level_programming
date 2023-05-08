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
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[j];
		n--;
	}
	return (dest);
}

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
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[i];
		n--;
	}
	return (dest);
}

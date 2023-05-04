#include "main.h"

/**
 * _strncpy - copies a string
 * @src: source string
 * @dest: destination string
 * @n:number of bytes to be apppended to dest
 * Return: resulting dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	char src_len = 0;

	while (src[index++])
	{
		src_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (index = src_len; index < n; index++)
	{
		dest[index] = 0;
	}
	return (dest);
}

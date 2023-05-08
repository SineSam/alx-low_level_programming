#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input string
 * @accept: input
 * Return: pointer to the byte in s, else '\0'
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; n++)
	{
		for (n = 0; accept[n]; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return ('\0');
}

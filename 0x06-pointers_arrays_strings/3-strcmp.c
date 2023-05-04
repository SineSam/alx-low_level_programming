#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1 to be compared
 * @s2: second string to be compared
 * Return: If str1 < str2, negative difference of first unmatched char
 * If str1 == str2, 0
 * If str1 > str2, positive difference of the first unmatched char
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

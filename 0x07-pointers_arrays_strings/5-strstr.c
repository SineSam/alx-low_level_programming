
#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 * @haystack:input string
 * @needle:substring to be located
 * Return: point to beginning of located substring, else '\0'
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}

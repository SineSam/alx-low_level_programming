#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of strings
 *
 * @*str: the length of the string
 *
 * Return: the @str length
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}

#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of strings
 *
 * @s: the length of the string
 *
 * Return: the @str length
 */

int _strlen(char *str)
{
	int length = 0;

	while (*str++)
	length++;
	return (length);
}

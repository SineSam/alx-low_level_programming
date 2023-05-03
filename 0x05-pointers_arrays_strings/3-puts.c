#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string,followed by a new line
 *
 * @str: string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
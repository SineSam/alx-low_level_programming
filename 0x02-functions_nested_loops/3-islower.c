#include "main.h"

/**
 * _islower - checks for lower characters
 *
 *@c: character to be checked
 *
 * Return: 1 if c lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

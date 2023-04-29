#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: the number that will have its sign determined
 *
 * Return: 1 if greater than 0, -1 if less than 0, otherwise 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

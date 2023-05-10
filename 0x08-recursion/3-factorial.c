#include "main.h"

/**
 * factorial - of a given number
 * @n:input
 * Return: factorial of n for n > 1, 1 for n = 1 or 0, -1 if n < 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
		n++;
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

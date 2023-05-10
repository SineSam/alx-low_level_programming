#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - the natural square root of a number
 * @n:input
 * Return: natural root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - the natural square root of a number
 * @n:input number to be square rooted
 * @i:iterate number
 * Return: square root, else the function should return -1
 */
int _sqrt_recursion(int n, int i);
{
	int sqrt_recursion = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (1);
	}
	return (_sqrt_recursion(n, i + 1));
}

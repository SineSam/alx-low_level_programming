#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns sum of 2 numbers
 * @a: first number to be added
 * @b: second number to be added
 * Return: sum a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference between 2 numbers
 * @a: first number to be subtracted from
 * @b: second number to subtract
 * Return: difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product between 2 numbers
 * @a: first number
 * @b: second number
 * Return: difference between a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns quotient of 2 numbers
 * @a: first number
 * @b: second number
 * Return: division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns remained of quotient
 * @a: first number
 * @b: second number
 * Return: remainder of a divided by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

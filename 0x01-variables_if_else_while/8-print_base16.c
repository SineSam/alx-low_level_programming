#include <stdio.h>

/**
 * main - Entry point
 *
 * print numbers of 16 base in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}

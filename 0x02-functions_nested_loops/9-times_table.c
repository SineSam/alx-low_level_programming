#include "main.h"

/**
 * times_table - calculates the 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, j, mul;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		_putchar(44);
		_putchar(32);

		for (j = 1; j <= 9; j++)
		{
			mul = i * j;
			if (mul <= 9)
			{
				_putchar(32);
				_putchar(mul + 48);
			}
			else
			{
				_putchar((mul / 10) + 48);
				_putchar((mul % 10) + 48);
			}
			if (j == 9)
				continue;
			_putchar(44);
			_putchar(32);
		}
		_putchar('\n');
	}
}

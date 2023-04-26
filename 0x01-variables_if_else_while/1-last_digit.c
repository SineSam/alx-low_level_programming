#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Programme generates random number and prints last digit with a message
 *
 *Return: always returns 0 on success
 **/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf(" %d ", &n);

	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("and is 0\n");
	}
	else if (last_digit < 6)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}

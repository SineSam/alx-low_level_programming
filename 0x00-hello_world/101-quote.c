#include <stdio.h>
#include <unistd.h>

/**
 * main- print "and that piece of art is useful \" - Dora Korpar, 2015-10-19" 
 * followed by new line to standard error
 * Return: Always (0), Success
 **/
int main (void)
{
	write(2, "and that piece of art is useful \" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}
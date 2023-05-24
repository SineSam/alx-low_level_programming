#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: the name it prints
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

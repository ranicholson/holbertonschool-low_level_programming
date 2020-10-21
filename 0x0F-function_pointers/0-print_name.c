#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - function to print name provided
 * @name: name to be printed
 * @f: pointer
 * @char: argument
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

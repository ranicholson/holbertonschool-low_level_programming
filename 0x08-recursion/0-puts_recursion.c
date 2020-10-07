#include "holberton.h"

/**
 * _puts_recursion - function to print a string
 * @s: string to print out
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}

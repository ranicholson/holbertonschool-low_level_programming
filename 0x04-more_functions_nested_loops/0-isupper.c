#include "holberton.h"
#include <stdio.h>

/**
 * main - Determine if a something is upp er lower case.
 * int_isupper - determine if something is upp er olower case
 * @n: letter to determine case of
 * Return: 1 for uppercase and 0 for lowercase
 */

int _isupper(int c)
{
	if (c <= 'Z')
		return (1);
	else
		return (0);
}

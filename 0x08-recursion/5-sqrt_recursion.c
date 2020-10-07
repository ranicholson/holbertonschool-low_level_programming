#include "holberton.h"

/**
 * _sqrt_recursion - find natural square root of a number
 * @n: number to find natural square of
 * Return: Natural square or -1 if there isn't one
 */

int _sqrt_recursion(int n)
{
	int x = 1;

	if ((x * x) == n)
		return (x);

	x++;
	_sqrt_recursion(n);

	return (-1);
}

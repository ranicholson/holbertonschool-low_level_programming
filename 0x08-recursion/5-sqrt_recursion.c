#include "holberton.h"

/**
 * sqrt_assist - help fin square of a number
 * @n: number to find root of
 * @x: square root
 * Return: square root
 */

int sqrt_assist(int n, int x)
{
	if (x * x == n)
		return (x);

	if (x > (n / 2))
		return (-1);

	if (n < 0)
		return (-1);

	return sqrt_assist( n, (x + 1));
}

/**
 * _sqrt_recursion - find natural square root of a number
 * @n: number to find natural square of
 * Return: Natural square or -1 if there isn't one
 */

int _sqrt_recursion(int n)
{
	int x = 0;

	n = sqrt_assist(n, x);

	return (n);
}

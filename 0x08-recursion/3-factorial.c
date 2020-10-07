#include "holberton.h"

/**
 * factorial - return factorial of a number
 * @n: number to return factorial of
 * Return: factorial of given number
 */

int factorial(int n)
{

	if (n < 0)
		return(-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

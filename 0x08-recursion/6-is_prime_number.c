#include "holberton.h"

/**
 * prime_assist - help determine if a number is prime
 * @n: number to determine primeness of
 * @x: helper for determining primeness
 * Return:1 if prime and 0 if not
 */

int prime_assist(int n, int x)
{
	if (x == n)
		return (1);

	if ((n % x) == 0 || n <= 1)
		return (0);

	return (prime_assist(n, x + 1));
}

/**
 * is_prime_number - function that returns 1 if pime and 0 if not
 * @n: number to determine primeness of
 * Return: 1 if prime or 0 if not
 */

int is_prime_number(int n)
{
	int x = 2;

	return (prime_assist(n, x));
}

#include "holberton.h"

/**
 * print_last_digit - function to print last digit of a number
 * @r: random number
 * Return: Hopefully 0!
 */

int print_last_digit(int r)
{
	int x = r % 10;

	if (x < 0)
		x *= -1;

	_putchar(x + '0');

	return (x);
}

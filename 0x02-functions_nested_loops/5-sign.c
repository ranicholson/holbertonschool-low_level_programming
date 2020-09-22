#include "holberton.h"

/**
 * print_sign - function to print sign of a number
 * @n: numbe to determine the sign of
 * Return: 1 for positive number, 0 if the number is 0, -1 if the number is
 * negative2
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}

	else
	{
		_putchar('0');

		return (0);
	}
}

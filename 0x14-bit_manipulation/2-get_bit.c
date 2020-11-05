#include "holberton.h"

/**
 * get_bit - function to return value of bit
 * @n: number to get value of bit from
 * @index: which bit to choose
 * Return: value of the bit or -1 if there is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x = 0;

	if (index > 63)
		return (-1);

	while (x < index)
	{
		n = n >> 1;
		x++;
	}

	return (n & 1);
}

#include "holberton.h"

/**
 * set_bit - function to change value of bit
 * @n: number to change value of bit from
 * @index: which bit to choose
 * Return: 1 upon success -1 if there is an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > 63)
		return (-1);

	x = x << index;

	*n |= x;

	return (1);
}

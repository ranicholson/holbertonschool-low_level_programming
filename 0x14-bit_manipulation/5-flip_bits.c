#include "holberton.h"

/**
 * flip_bits - function that counts the number of bits that need to be flipped
 * to get from one number to the other
 * @n: number to compare
 * @m: number to compare
 * Return: number of bits needing to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int y = 0, x;

	x = n ^ m;

	while (x > 0)
	{
		y += (x & 1);
		x = x >> 1;
	}

	return (y);
}

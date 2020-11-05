#include "holberton.h"

/**
 * binary_to_uint - function that converts binary number to unsigned int
 * @b: pointer to string that contains 0 and 1 chars
 * Return: converted number or 0 if there is a problem
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0, x = 0, y = 0;

	if (b == NULL)
		return (0);

	while (b[y] != '\0')
	{
		if (b[y] == '0' || b[y] == '1')
			y++;
		else
			return (0);
	}

	while (x < y)
	{
		conv = conv << 1;

		if (b[x] == '1')
			conv += 1;

		x++;
	}

	return (conv);
}

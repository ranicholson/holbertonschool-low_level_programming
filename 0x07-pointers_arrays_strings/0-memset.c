#include "holberton.h"

/**
 * _memset - filling memory with a constant byte
 * @s: string to write to
 * @b: byte to be written
 * @n: number of bytes to be written to
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}

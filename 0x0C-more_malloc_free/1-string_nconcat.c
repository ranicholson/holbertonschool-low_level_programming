#include <stdlib.h>
#include "holberton.h"

/**
 * *string_nconcat - concatenate two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: length of s2 to concatenate
 * Return: pointer to the location of completed concatenation or NULL for fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, a, b;
	char *conc;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x]; x++)
		;

	for (y = 0; s2[y]; y++)
		;

	if (y > n)
		y = n;

	conc = malloc(x + y + 1);

	if (conc == NULL)
		return (NULL);

	for (a = 0; a < x; a++)
		conc[a] = s1[a];

	for (b = 0; b < y; b++)
		conc[b + x] = s2[b];

	conc[y + x] = '\0';

	return (conc);
}

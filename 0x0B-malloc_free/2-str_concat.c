#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - function to concatenate two strings.
 * @s1: first string
 * @s2: second string
 * Return: NULL if function fails, or pointer for location of new string
 */

char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0, z;
	char *conc;

	if (s1 == NULL)
		s1 = '\0';

	if (s2 == NULL)
		s2 = '\0';

	while (s1[x] != '\0')
		x++;

	while (s2[y] != '\0')
		y++;

	conc = malloc((sizeof(char) * (x + y)) + 1);

	if (conc == NULL)
		return (NULL);

	for (z = 0; z < x; z++)
		conc[z] = s1[z];

	for (; z < (x + y); z++)
		conc[z] = s2[z - x];

	conc[x + y + 1] = '\0';

	return (conc);
}

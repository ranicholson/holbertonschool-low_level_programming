#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - function to return a pointer to a newly allocated space in memory
 * which contains a copy of the string
 * @str: string to copy and store
 * Return: NULL if the string value is NULL or if there is insufficient memory
 * will return pointed upon success
 */

char *_strdup(char *str)
{
	int x;
	int y = 0;
	char *z;

	if (str == NULL)
		return (NULL);

	while (str[y] != '\0')
		y++;

	z = malloc((sizeof(char) * y) + 1);

	if (z == NULL)
		return (NULL);

	for (x = 0; x <= y; x++)
		z[x] = str[x];

	return (z);
}

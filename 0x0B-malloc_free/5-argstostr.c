#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - concatenate all the arguments in a program
 * @ac: same as argc
 * @av: same as argv
 * Return: NULL if ac is 0, av is NULL, or if failure occures. Pointer to a new
 * string upon success.
 */

char *argstostr(int ac, char **av)
{
	int x, y, z = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != 0; y++)
			z++;

		z++;
	}

	str = malloc(sizeof(char) * (z + 1));

	if (str == NULL)
		return (NULL);

	z = 0;

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			str[z] = av[x][y];
			z++;
		}

		str[z] = '\n';
		z++;
	}

	return (str);
}

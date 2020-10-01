#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *Return: 0, negative number, or positive number depending
 * on if the strings are different
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while ((s1[x] && s2[x] != '\0') && s1[x] == s2[x])
	{
		x++;
	}

	if (s1[x] == s2[x])
	{
		return (0);
	}

	else
	{
		return (s1[x] - s2[x]);
	}
}

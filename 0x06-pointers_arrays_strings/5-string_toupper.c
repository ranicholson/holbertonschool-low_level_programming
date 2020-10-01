#include "holberton.h"

/**
 * *string_toupper - funciton to change all lowercase letters to
 * uppercase
 * @str: string to change letters in
 * Return: should be the string with all uppercase letters
 */

char *string_toupper(char *str)
{
	int x;

	for (x = 0; str[x]; x++)
	{
		if (str[x] <= 90)
			str[x] = str[x];

		else
			str[x] = str[x] - 32;
	}

	return (str);
}

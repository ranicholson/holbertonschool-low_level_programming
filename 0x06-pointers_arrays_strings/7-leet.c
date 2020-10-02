#include "holberton.h"

/**
 * *leet - Swap out some letters for numbers.
 *@str: string with words to be capitalized.
 * Return: should be the string with capitalized letters
 */

char *leet(char *str)
{
	int x;
	int y;
	char z[] = "a4A4e3E3o0O0t7T7l1L1";

	for (x = 0; str[x]; x++)
	{
		for (y = 0; y <= 20; y++)
		{
			if (str[x] == z[y])
			{
				str[x] = z[y + 1];
			}
			y++;
		}
	}

	return (str);
}

#include "holberton.h"

/**
 * *cap_string - capitalize all the words in a string
 *@str: string with words to be capitalized.
 * Return: should be the string with capitalized letters
 */

char *cap_string(char *str)
{
	int x;

	for (x = 0; str[x]; x++)
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;

		else if (str[x] == 9 || str[x] == 10 || str[x] == 32 ||
			 str[x] == 33 || str[x] == 34 || str[x] == 40 ||
			 str[x] == 41 || str[x] == 44 || str[x] == 46 ||
			 str[x] == 59 || str[x] == 63 || str[x] == 123 ||
			 str[x] == 125)
		{
			if (str[x + 1] >= 97 && str[x + 1] <= 122)
			{
				x++;
				str[x] = str[x] - 32;
				x--;
			}
			else
			{}
		}

		else
		{}
	}

	return (str);
}

#include "holberton.h"

/**
 * rot13 - function to encode a string
 * @str: string to be encoded
 * Return: encoded string
 */

char *rot13(char *str)
{

	int x;
	int y;
	char z[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (x = 0; str[x]; x++)
	{
		for (y = 0; a[y]; y++)
		{
			if (str[x] == a[y])
			{
				str[x] = z[y];
				break;
			}
		}
	}

	return (str);
}

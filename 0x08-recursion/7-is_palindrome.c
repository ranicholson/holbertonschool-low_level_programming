#include "holberton.h"

/**
 * is_palindrome - function to determine if string is palindrome
 * @s: string to determine palindrimity of
 * Return: 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int x = _strlen_recursion(s);
	int y = 0;

	if (*s == (*s + (x - 1)))
		return (pal_assist(s, x, y));

	return (0);
}

/**
 * pal_assist - help to determine if a string is a palindrome
 * @s: string to check
 * @x: length of string
 * @y: section of string
 * Return: 1 if palindrome and 0 if not
 */

int pal_assist( char *s, int x, int y)
{
	if (s[y] != s[x - 1])
		return (0);

	if (s[y + 1] == '\n')
		return (1);

	pal_assist(y + 1, x - 1);
}

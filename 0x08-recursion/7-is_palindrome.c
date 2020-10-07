#include "holberton.h"

/**
 * pal_assist - help to determine if a string is a palindrome
 * @s: string to check
 * @x: length of string
 * @y: section of string
 * Return: 1 if palindrome and 0 if not
 */

int pal_assist( char *s, int x)
{
	if (*s != s[x])
		return (0);

	if (*s == '\n')
		return (1);

	return (pal_assist(s + 1, x - 2));
}

/**
 * _strlen_recursion - find length of string
 * @s: string to find length of
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}

	return (x);
}


/**
 * is_palindrome - function to determine if string is palindrome
 * @s: string to determine palindrimity of
 * Return: 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int x = _strlen_recursion(s);

	if (*s == *(s + x))
		return (pal_assist(s, x));

	return (0);
}

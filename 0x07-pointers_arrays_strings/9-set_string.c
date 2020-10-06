#include "holberton.h"

/**
 * set_string - set the value of a pointer to a char
 * @s: pointer to change value of
 * @to: char value to set pointer to
 */

void set_string(char **s, char *to)
{
	*s = to;
}

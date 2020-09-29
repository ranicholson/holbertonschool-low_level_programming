#include "holberton.h"

/**
 * swap_int - swap the value of two integers
 * @a: variable to swap
 * @b: variable to swap
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

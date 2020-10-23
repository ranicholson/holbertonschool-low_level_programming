#include "variadic_functions.h"

/**
 * sum_them_all - function to return sum of all its parameters
 * @n: number of arguments
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list zp;
	unsigned int x, y = 0;

	va_start(zp, n);

	if (n == 0)
		return (0);

	for (x = 0; x < n; x++)
		y += va_arg(zp, int);

	va_end(zp);

	return (y);
}

#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between two numbers
 * @n: number of integers passed to funciton
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list zp;
	unsigned int x;

	va_start(zp, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(zp, int));

		if (x == n - 1)
			break;

		if (separator != NULL)
			printf("%s", separator);
	}
	va_end(zp);

	printf("\n");
}

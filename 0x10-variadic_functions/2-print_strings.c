#include "variadic_functions.h"

/**
 * print_strings - function to print strings
 * @separator: string to be prited between strings
 * @n: number of arguments passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list zp;
	unsigned int x;
	char *y;

	va_start(zp, n);

	for (x = 0; x < n; x++)
	{
		y = va_arg(zp, char *);

		if (y != NULL)
			printf("%s", y);

		else
			printf("(nil)");

		if (x == n - 1)
			break;

		if (separator != NULL)
			printf("%s", separator);
	}

	va_end(zp);

	printf("\n");
}

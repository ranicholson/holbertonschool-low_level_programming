#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - function to print the numbers from n to 98
 * @n: number
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		else if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else
		{
			printf("98");
		}
	}
	printf("98");
	printf("\n");
}

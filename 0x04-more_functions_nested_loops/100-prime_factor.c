#include <stdio.h>

/**
 * main - trying to get prime factor of a number
 *
 * Return: Should be 0
 */

int main(void)
{
	long int x = 1231952;
	long int y = 2;
	long int maxp;

	while (x != 0)
		{
			if (x % y != 0)
				y++;
			else
			{
				maxp = x;
				x = x / y;
				if (x == 1)
				{
					printf("%ld", maxp);
					break;
				}
			}
		}
	printf("\n");

	return (0);
}

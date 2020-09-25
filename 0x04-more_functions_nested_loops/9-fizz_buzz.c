#include <stdio.h>

/**
 * main - trying to print out numbers 1 to 100 with rules
 * Return: Should be 0!
 *
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3) == 0 && (x % 5) == 0)
			printf("FizzBuzz");
		else if ((x % 3) == 0)
			printf("Fizz");
		else if ((x % 5) == 0)
			printf("Buzz");
		else if (x == 100)
			continue;
		else
			printf("%d", x);
		printf(" ");
	}
	printf("\n");

	return (0);
}

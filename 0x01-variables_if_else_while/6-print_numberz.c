#include <stdio.h>

/**
 * main- for
 * description: loop used to print a block of code
 * Return: Hopefully 0!
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}

	putchar('\n');

	return (0);
}

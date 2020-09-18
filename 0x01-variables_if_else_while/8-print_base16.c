#include <stdio.h>

/**
 * main- for
 * description: loop used to print a block of code
 * Return: Hopefully 0!
 */

int main(void)
{
	int x;
	char y;

	for (x = 0; x <= 9; x++)
	{
		putchar((x % 10) + '0');
	}

	for (y = 'a'; y <= 'f' ; y++)
	{
		putchar(y);
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main- putchar
 * description: printing characters without using printf
 * Return: Hopefully 0!
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
			putchar(x);
	}

	putchar('\n');

	return (0);
}

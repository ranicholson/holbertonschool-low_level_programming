#include <stdio.h>
#include <unistd.h>

/**
 * main- fwrite
 * description:write to binary stream output
 * Return: should be 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2014-10-15\n", 59);

	return (1);
}

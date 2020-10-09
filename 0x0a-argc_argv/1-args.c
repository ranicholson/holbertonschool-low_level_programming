#include <stdio.h>

/**
 * main - print the number of arguments passed through it
 * @argc: number of arguments being passed
 * @argv: arguments being passed
 * Return: 0 for success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}

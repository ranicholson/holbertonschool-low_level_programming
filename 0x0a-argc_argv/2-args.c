#include <stdio.h>

/**
 * main - program to print all arguments received
 * @argc: number of commands
 * @argv: array of commands
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);

	return (0);
}

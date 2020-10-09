#include <stdio.h>

/**
 * main - using with argc and argv
 * @argc: number of commands
 * @argv: string pointing to commands
 * Return: exit success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}

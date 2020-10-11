#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add postive numbers
 * @argc: length of string
 * @argv: array that points to a string
 * Return: 0 if successful and 1 if not
 */

int main(int argc, char *argv[])
{
	int x;
	int y;
	int z;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		for (z = 0; argv[x][z] != '\0'; z++)
		{
			if (!isdigit(argv[x][z]))
			{
				printf("Error\n");
				return (1);
			}
		}
		y += atoi(argv[x]);
	}

	printf("%d\n", y);
	return (0);
}

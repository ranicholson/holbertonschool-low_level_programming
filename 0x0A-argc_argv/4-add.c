#include <stdio.h>
#include <stdlib.h>

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

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{

		if ((!atoi(argv[x]) && *argv[x] != '0') || atoi(argv[x]) < 0)
		{
			printf("Error\n");
			return (1);

		}

		y += atoi(argv[x]);
	}

	printf("%d\n", y);
	return (0);
}

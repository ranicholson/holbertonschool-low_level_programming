#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to do simple operations
 * @argc: number of arguments
 * @argv: arguments being passed
 * Return: 0 upon success or a different value for errors
 */

int main(int argc, char *argv[])
{
	int x;
	int y;
	int z;
	int (*math)(int, int);
	char opera;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	opera = *(argv[2]);

	math = get_op_func(argv[2]);

	if (math == NULL)
	{
		printf("Error\n");
		return (99);
	}

	y = atoi(argv[3]);

	if ((opera == '%' && y == 0) || (opera == '/' && y == 0))
	{
		printf("Error\n");
		return (100);
	}

	x = atoi(argv[1]);

	z = math(x, y);

	printf("%d\n", z);

	return (0);
}

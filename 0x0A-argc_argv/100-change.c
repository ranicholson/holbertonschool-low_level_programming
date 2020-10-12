#include <stdio.h>
#include <stdlib.h>

/**
 * main - trying to figure out coins for change
 * @argc: length of string
 * @argv: amount to give change for
 * Return: 0 for success and 1 for ultimate failure
 */

int main(int argc, char *argv[])
{
	int x;
	int y;

	if (argc == 2)
	{
		y = atoi(argv[1]);
		if (y < 0)
		{
			printf("0\n");
			return (1);
		}
		while (y != 0)
		{
			if (y % 25 == 0)
			{
				y -= 25;
				x++;
			}
			else if (y % 10 == 0)
			{
				y -= 10;
				x++;
			}
			else if (y % 5 == 0)
			{
				y -= 5;
				x++;
			}
			else if (y % 2 == 0)
			{
				y -= 2;
				x++;
			}
			else  if (y % 1 == 0)
			{
				y -= 1;
				x++;
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", x);
	return (0);
}

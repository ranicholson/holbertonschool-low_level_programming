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
	int x, y;

	if (argc == 2)
	{
		y = atoi(argv[1]);
		while (y != 0)
		{
			if (y < 0)
				break;
			else if (y >= 25)
			{
				y -= 25, x++;
			}
			else if (y >= 10)
			{
				y -= 10, x++;
			}
			else if (y >= 5)
			{
				y -= 5, x++;
			}
			else if (y >= 2)
			{
				y -= 2, x++;
			}
			else  if (y >= 1)
			{
				y -= 1, x++;
			}
		}
	}
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", x);
	return (0);
}

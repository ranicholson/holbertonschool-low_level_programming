#include <stdio.h>

/**
 * main- printf is the main function used
 * description: printing size of stuff
 * Return: 0
 */

int main(void)
{
	printf("%zu\n", sizeof(char));
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(long int));
	printf("%zu\n", sizeof(long long int));
	printf("%zu\n", sizeof(float));

	return (0);
}

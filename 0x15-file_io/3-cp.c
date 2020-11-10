#include "holberton.h"

/**
 * main - function to copy one file to another
 * @argc: number of arguments passed
 * @argv: arguments containing file to copy
 */

int main(int argc, char *argv[])
{
	char buffy[1024];
	int oporg, opcpy, wr, re, cloor, clocp;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(07);
	}

	oporg = open(argv[1], O_RDONLY);

	if (oporg == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}

	opcpy = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (opcpy == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[3]);
		exit(99);
	}

	re = read(oporg, buffy, 1024);

	if (re == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}

	wr = write(opcpy, buffy, re);

	if (wr == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[3]);
		exit(99);
	}

	cloor = close(oporg);

	if (cloor == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", oporg);
		exit(100);
	}

	clocp = close(opcpy);

	if (clocp == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", opcpy);
		exit(100);
	}

	return (0);
}

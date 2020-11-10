#include "holberton.h"

int close_friend(int fd);

/**
 * main - function to copy one file to another
 * @argc: number of arguments passed
 * @argv: arguments containing file to copy
 * Return: 0 upon success
 */

int main(int argc, char *argv[])
{
	char buffy[1024];
	int oporg, opcpy, wr, re, clf;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
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
		close_friend(oporg);
		exit(99);
	}
	re = read(oporg, buffy, 1024);
	if (re == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[2]);
		close_friend(oporg);
		close_friend(opcpy);
		exit(98);
	}
	wr = write(opcpy, buffy, re);
	if (wr == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[3]);
		close_friend(oporg);
		close_friend(opcpy);
		exit(99);
	}
	clf = close_friend(oporg);
	clf += close_friend(opcpy);

	if (clf < 0)
		exit(100);

	return (0);
}

/**
 * close_friend - function to handle closing field discriptors
 * @fd: field discriptor to close
 * Return: 0 for success and -1 on fail
 */

int close_friend(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);

	return (x);
}

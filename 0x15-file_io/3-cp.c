#include "holberton.h"

void close_friend(int fd);
void rerr(char *arg);
void werr(char *arg);

/**
 * main - function to copy one file to another
 * @argc: number of arguments passed
 * @argv: arguments containing file to copy
 * Return: 0 upon success
 */

int main(int argc, char *argv[])
{
	char *buffy;
	int oporg, opcpy, wr, re = 1;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	oporg = open(argv[1], O_RDONLY);
	if (oporg == -1)
		rerr(argv[1]);
	opcpy = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (opcpy == -1)
	{
		close_friend(oporg);
		werr(argv[2]);
	}
	buffy = malloc(1024);
	if (buffy == NULL)
	rerr(argv[1]);
	while (re > 0)
	{
		re = read(oporg, buffy, 1024);
		if (re == -1)
		{
			free(buffy);
			close_friend(oporg);
			close_friend(opcpy);
			rerr(argv[1]);
		}
		wr = write(opcpy, buffy, re);
		if (wr != re)
		{
			free(buffy);
			close_friend(oporg);
			close_friend(opcpy);
			werr(argv[2]);
		}
	}
	close_friend(oporg);
	close_friend(opcpy);
	free(buffy);
	return (0);
}

/**
 * close_friend - function to handle closing field discriptors
 * @fd: field discriptor to close
  */

void close_friend(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * rerr - function ro handle read error
 * @arg: file that cannot be read
 */

void rerr(char *arg)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
	exit(98);
}

/**
 * werr - function to handle write error
 * @arg: file that cannot be written to
 */


void werr(char *arg)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg);
	exit(99);
}

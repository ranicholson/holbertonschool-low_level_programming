#include "holberton.h"

/**
 * read_textfile - function that reads and prints a text file
 * @filename: text file to read and print
 * @letters: number of letters that should be read and printed
 * Return: number of letters that could be read and printed or 0 upon error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, o, r, y = letters;
	char *tmp;

	if (filename == NULL)
		return (0);

	o = open(filename, O_RDONLY);

	if (o == -1)
		return (0);

	tmp = malloc(sizeof(char) * letters);

	if (tmp == NULL)
		return (0);

	r = read(o, tmp, letters);

	if (r == -1)
	{
		free(tmp);
		return (0);
	}

	x = write(STDOUT_FILENO, tmp, letters);

	if (x != y || x < 0)
	{
		free(tmp);
		return (0);
	}

	free(tmp);
	close(o);

	return (x);
}

#include "holberton.h"

/**
 * create_file - function to create a file
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 for success and -1 for failure
 */

int create_file(const char *filename, char *text_content)
{
	int x = 0, op, wr;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (op == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (x = 0; text_content[x]; x++)
			;
	}

	wr = write(op, text_content, x);

	if (wr == -1)
		return (-1);

	close(op);

	return (1);
}

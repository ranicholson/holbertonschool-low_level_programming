#include "holberton.h"

/**
 * append_text_to_file - function to append text at the end of a file
 * @filename: file to append text to
 * @text_content: text to append to file
 * Return: 1 for success and -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x, op, wr;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);

	if (op == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (x = 0; text_content[x]; x++)
		;

	wr = write(op, text_content, x);

	if (wr == -1)
		return (-1);

	return (1);
}

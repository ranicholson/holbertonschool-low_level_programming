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

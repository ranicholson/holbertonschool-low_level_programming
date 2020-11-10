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
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x);

	return (x);
}

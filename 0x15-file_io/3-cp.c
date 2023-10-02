#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * copy_from_to - copy content from a file to a file
 * @fd_from: from file num
 * @fd_to: to file num
 * @to_file_name: to file name
 */
static void copy_from_to(int fd_from, int fd_to, const char *to_file_name)
{
	char buffer[1025];
	ssize_t n_read, n_write;

	n_read = read(fd_from, buffer, 1024);
	while (n_read > 0)
	{
		n_write = write(fd_to, buffer, n_read);
		if (n_write != n_read)
		{
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_file_name);
			exit(99);
		}
		n_read = read(fd_from, buffer, 1024);
	}
}
/**
 * main - entry poinmt
 * @argc: args count
 * @argv: args
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	int fd_from_close, fd_to_close;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}
	copy_from_to(fd_from, fd_to, argv[2]);
	fd_from_close = close(fd_from);
	fd_to_close = close(fd_to);
	if (fd_from_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from_close);
		exit(100);
	}
	else if (fd_to_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to_close);
		exit(100);
	}
	exit(EXIT_SUCCESS);
}


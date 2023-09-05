#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _cp - copy from fd_from to fd_to
 * @fd_from: from fd
 * @fd_to: to fd
 * @from_file_name: from file name
 * @to_file_name: to file name
 * Return: void
 */
void _cp(int fd_from, int fd_to, const char *to_file_name,
		const char *from_file_name)
{
	int r = 0, w = 0;
	char buffer[1025];

	while (1)
	{
		r = read(fd_from, buffer, 1024);
		if (r < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_file_name);
			close(fd_from);
			close(fd_to);
			exit(98);
		}
		else if (r == 0)
			break;
		buffer[r] = '\0';
		w = write(fd_to, buffer, r);
		if (r != w)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_file_name);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
}
/**
 * main -copy the contents from one file to another
 * @argc: arg count
 * @argv: args
 * Return: 97
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0666);
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	_cp(fd_from, fd_to, argv[2], argv[1]);
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		close(fd_to);
		exit(100);
	}
	else
	{
		if (close(fd_to) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
			exit(100);
		}
	}
	exit(EXIT_SUCCESS);
}


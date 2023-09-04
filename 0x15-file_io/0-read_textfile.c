#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: file name
 * @letters:  the number of letters it should read and print
 * Return: he actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	size_t read_letters = 0;
	size_t write_letters = 0;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}
	read_letters = read(fd, buffer, letters);
	if (read_letters > 0)
	{
		buffer[read_letters] = '\0';
		write_letters = write(STDOUT_FILENO, buffer, read_letters);
	}
	if (write_letters != read_letters)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (write_letters);
}


#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the std output.
 * @filename: file name
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * or 0 if it could not open the file or read it
 * or the filename is null
 * or write failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdin;
	char *buffer;
	ssize_t n_read, n_write;

	if (filename == NULL)
		return (0);
	fdin = open(filename, O_RDONLY);
	if (fdin != -1)
	{
		buffer = malloc(sizeof(char) * (letters + 1));
		if (buffer != NULL)
		{
			n_read = read(fdin, buffer, letters);
			if (n_read != -1)
			{
				n_write = write(STDOUT_FILENO, buffer, n_read);
				if (n_write != n_read)
				{
					n_write = 0;
				}
			}
			else
			{
				n_write = 0;
			}
			free(buffer);
		}
		else
		{
			n_write = 0;
		}
		close(fdin);
	}
	else
	{
		n_write = 0;
	}
	return (n_write);
}


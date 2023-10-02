#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * _strlen - calc len of str
 * @str: null terminated string
 * Return: len of str or 0 if null or empty
 */
static size_t _strlen(const char *str)
{
	size_t len = 0;

	if (str == NULL)
		return (0);
	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create
 * @text_content: a string to write to the file
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fout;
	size_t len;
	ssize_t n_write;

	if (filename == NULL)
		return (-1);
	fout = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fout != -1)
	{
		if (text_content != NULL)
		{
			len = _strlen(text_content);
			n_write = write(fout, text_content, len);
			close(fout);
			if (n_write != (ssize_t)len)
			{
				return (-1);
			}
			else
			{
				return (1);
			}
		}
		else
		{
			close(fout);
			return (1);
		}
	}
	else
	{
		return (-1);
	}
}


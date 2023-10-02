#include "main.h"
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * _strlen - a function to calc length of a string
 * @str: string
 * Return: 0 if str is null or empty otherwise length
 */
static size_t _strlen(const char *str)
{
	size_t len = 0;

	if (str == NULL || *str == '\0')
		return (0);
	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: file name
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdout;
	size_t len;
	ssize_t n_write;

	if (filename == NULL)
		return (-1);
	fdout = open(filename, O_APPEND | O_WRONLY);
	if (fdout != -1)
	{
		if (text_content != NULL)
		{
			len = _strlen(text_content);
			n_write = write(fdout, text_content, len);
			close(fdout);
			if (n_write != (ssize_t)len)
				return (-1);
			else
				return (1);
		}
		else
		{
			close(fdout);
			return (1);
		}
	}
	else
	{
		return (-1);
	}
}


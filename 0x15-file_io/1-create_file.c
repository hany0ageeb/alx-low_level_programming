#include <unistd.h>
#include <fcntl.h>
/**
 * _strlen - a function to calculate the length of a string in chars
 * @str: string to find its legnth
 * Return length of str
 */
size_t _strlen(const char *str)
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
 * @filename:  the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0, written = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = _strlen(text_content);
	if (len > 0)
	{
		written = write(fd, text_content, len);
		if (written < len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}


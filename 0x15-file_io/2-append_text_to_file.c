#include <unistd.h>
#include <fcntl.h>
/**
 * _strlen - a function to get the length of string
 * @str: string
 * Return: length of str
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
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len, written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		len = _strlen(text_content);
		if (len > 0)
		{
			written = write(fd, text_content, len);
			if (written != len)
			{
				close(fd);
				return (-1);
			}
		}
	}
	close(fd);
	return (1);
}


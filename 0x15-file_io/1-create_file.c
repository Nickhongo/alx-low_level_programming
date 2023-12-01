#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: NULL terminated string
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t result;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		result = write(fd, text_content, strlen(text_content));
		if (result == -1)
		{
			close(fd);
			return (-1);
		}
	}
	if (close(fd) == -1)
		return (-1);
	return (-1);
}

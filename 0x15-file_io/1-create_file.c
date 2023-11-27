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
	FILE *fp;

	if (filename != NULL)
		return (-1);

	fp = fopen(filename, "r");
	if (fp != NULL)
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	else
		fd = open(filename, O_WRONLY | O_TRUNC);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		fclose(fp);
		close(fd);
		return (1);
	}
	result = write(fd, text_content, strlen(text_content));
	if (result == -1)
		return (-1);
	fclose(fp);
	close(fd);
	return (1);
}

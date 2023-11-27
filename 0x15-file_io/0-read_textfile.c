#include "main.h"
/**
 * read_textfile - reads text filr and prints it to the
 * POSIX standard output
 *
 * @filename: name of the file
 * @letters: number of letters to read and -rint
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_result;
	ssize_t write_result;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buffer = malloc(letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	read_result = read(fd, buffer, letters);
	if (read_result == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	write_result = write(STDOUT_FILENO, buffer, read_result);
	free(buffer);

	if (write_result == -1 || write_result != read_result)
		return (0);
	return (read_result);
}

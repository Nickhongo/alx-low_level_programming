#include "main.h"
/**
 * error_and_exit - finds the error and exits
 * @exit_start: exit
 * @format: pointer to the exit
 * Return: returns nothing
 */
void error_and_exit(int exit_start, const char *format, ...)
{
	va_list args;

	va_start(args, format);

	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(exit_start);
}
/**
 * main - main entry point to the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *from;
	char *to;
	int fd_from;
	int fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t readByte, writeByte;

	from = argv[1];
	to = argv[2];
	if (argc != 3)
		error_and_exit(97, "Usage: %s file_from_file_to %s\n", argv[0]);
	fd_from = open(from, O_RDONLY);
	if (fd_from == -1)
		error_and_exit(98, "Error: Cant read from file %s\n", from);
	fd_to = open(to,
	O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		error_and_exit(99, "Error: Cant write to file %s\n", to);
	}
	while ((readByte = read(fd_from, buffer, BUFFER_SIZE)) > 0)
		writeByte = write(fd_to, buffer, readByte);
	if (writeByte == -1 || writeByte != readByte)
	{
		close(fd_from);
		close(fd_to);
		error_and_exit(99, "Error: Cant write to file %s\n", to);
	}
	if (readByte == -1)
	{
		close(fd_from);
		close(fd_to);
		error_and_exit(98, "Error: Cant read from file %s\n", from);
	}
	if (close(fd_from) == -1)
		error_and_exit(100, "Error: Cant close fd %d\n", fd_from);
	if (close(fd_to) == -1)
		error_and_exit(100, "Error: Cant close fd %d\n", fd_to);
	return (0);
}

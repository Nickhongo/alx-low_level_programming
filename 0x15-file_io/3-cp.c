#include "main.h"
/**
 * main - main entry point to the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, c, d, count;
	FILE *fp;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_fro, file_to\n");
		exit(97);
	}
	a = open(argv[1], O_RDONLY);
	if (a == -1)
	{
		dprintf(2, "Error: Cant read from file %s\n", argv[1]);
		exit(98);
	}
	fp = fopen(argv[2], "r");
	if (!fp)
		b = open(argv[2], O_WRONLY | O_CREAT, 0664);
	else
		b = open(argv[2], O_WRONLY | O_TRUNC);
	count = copy_file(a, b);
	if (count == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (fp)
		fclose(fp);
	c = close(a);
	if (c == -1)
	{
		dprintf(2, "Error: Cant close fd %d\n", a);
		exit(100);
	}
	d = close(b);
	if (d == -1)
	{
		dprintf(2, "Error: Cant close fd %d\n", b);
		exit(100);
	}
	return (0);
}
/**
 *copy_file - copies file
 *@fd: ref to file to copy from
 *@fp: ref to file copy to
 *Return: return 1 or -1
 */
int copy_file(int fd, int fp)
{
	char buffer[1024];
	ssize_t nb_read, nb_write;

	while (nb_read != 0)
	{
		nb_read = read(fd, buffer, 1024);
		if (nb_read == -1)
			return (-1);
		nb_write = write(fp, buffer, nb_read);
		if (nb_write == -1)
			return (-1);
	}
	return (1);
}

1
2
3
4
5
6
7
8
9
10
11
12
13
#include <unistd.h>
/**
 * * _putchar - writes the character c to stdout
 * * @c: The character to print
 * *
 * * Return: On success 1.
 * * On error, -1 is returned, and errno is set appropriately.
 * */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

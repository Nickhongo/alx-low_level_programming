#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - program
 * @argc: argument count
 * @argv: argument vector
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int (*func_ptr)(int, int);
	int a, b, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func_ptr = get_op_func(argv[2]);

	if (func_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func_ptr(a, b);
	printf("%d\n", result);
	return (0);
}

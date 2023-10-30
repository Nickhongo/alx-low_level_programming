#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of argumrnts passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

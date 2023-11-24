#include "main.h"
/**
 * print_binary - print binary representation of a number
 * @n: integer
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) ? '1' : '0');
}

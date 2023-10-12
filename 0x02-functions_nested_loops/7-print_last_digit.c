#include "main.h"
/**
 * print_last_digit - prints the last digit
 * Return: returns last digit
 * @f:integer to be printed as first digit
 */
int print_last_digit(int f)
{
	int l;

	l = f % 10;

	if (f < 10)
		l = -l;
	_putchar('0' + l);
	return (l);
}

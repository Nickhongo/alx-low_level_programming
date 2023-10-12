#include "main.h"
/**
 * print_last_digit - prints the last digit
 * Return: returns last digit
 * @num:integer to be printed as first digit
 */
int print_last_digit(int num)
{
	int lastDigit;

	lastDigit = num % 10;

	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}

#include "main.h"
/**
 * main - prints main entry point
 * @void: sets no parameters
 * Return: returns 0
 */

int main(void)
{
	int sum = 0;
	int j;

	for (j = 0; j < 1024; j++)
	{
		if (j % 3 == 0 || i % 5 == 0)
		{
			sum += j;
		}
	}
	_putchar((sum / 100000) + '0');
	_putchar((sum / 10000 % 10) + '0');
	_putchar((sum / 1000 % 10) + '0');
	_putchar((sum / 100 % 10) + '0');
	_putchar((sum / 10 % 10) + '0');
	_putchar((sum % 10) + '0');
	_putchar('/n');

	return (0);
}

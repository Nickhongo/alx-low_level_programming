#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * Returns: 0;
 * @n: the diagonal line to be printed
 */

void print_diagonal(int n)

{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int gaps = 0;

		while (n > 0)
		{
			int i;

			for (i = 0; i < gaps; i++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			gaps++;
			n--;
		}
	}
}

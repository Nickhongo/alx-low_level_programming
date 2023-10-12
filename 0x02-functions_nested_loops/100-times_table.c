#include "main.h"
/**
 *print_times_table - prints the n times table
 * @n: integer to be printed
 * Return: 0
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int a, b;

		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				int result = a * b;

				if (b > 0)
				{
					_putchar(',');
					_putchar(' ');
					if (result < 10)
					{
						_putchar(' ');
					}
					else if (result >= 10)
					{
						_putchar(' ');
					}
					_putchar(result + '0');
				}
				_putchar('\n');
			}
		}

	}
}

#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10x
 * Return: retuns 0
 */
void print_alphabet_x10(void)
{
	char l;
	int i;

	for (i = 0; i < 10; i++)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
	}
}

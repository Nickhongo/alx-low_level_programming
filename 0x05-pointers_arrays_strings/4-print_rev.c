#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: returns 0
 */

void print_rev(char *s)
{
	int length = 0;
	int a = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (a = length - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}

	_putchar('\n');
}

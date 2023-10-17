#include "main.h"
/**
 * puts_half - prints second half of the string
 * @str : string input
 * Return: returns a new line
 */
void puts_half(char *str)
{
	int string;
	int s;
	int v;

	while (str[string] != '\0')
	{
		string++;
	}

	if (string % 2 == 0)
	{
		v = string / 2;
	}
	else
	{
		v = (string - 1) / 2;
	}
	for (s = v; s < string; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}

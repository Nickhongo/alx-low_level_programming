#include "main.h"
/**
 * puts_half - prints second half of the string
 * @str : string input
 * Return: returns a new line
 */
void puts_half(char *str)
{
	int string = 0;
	int s;

	while (str[string] != '\0')
	{
		string++;
	}

	if (string + 1 % 2 != '0')
	{
		s = (string - 1) / 2;
	}
	else
	{
		s = (string / 2);
	}
	for (string = s; str[string] != '\0'; string++)
	{
		_putchar(str[string]);
	}
	_putchar('\n');
}

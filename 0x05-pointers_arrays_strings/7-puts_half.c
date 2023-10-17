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
	int i = 0;

	for (string = 0; str[string] != '\0'; string++)

	i++;

	s = (i / 2);


	if ((i % 2) == 1)
	{
		s = ((i + 1) / 2);
	}

	for (string = s; str[string] != '\0'; string++)
	{
		_putchar(str[string]);
	}

	_putchar('\n');
}

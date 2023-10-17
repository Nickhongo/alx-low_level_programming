#include "main.h"
#include <stddef.h>
/**
 * puts2 -prints every other character of a string
 * @str: reps a string
 * Return: returns 0
 */

void puts2(char *str)
{
	int a = 0;

	if (str == NULL)
	{
		return;
	}

	for (a = 0; str[a] != '\0'; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}

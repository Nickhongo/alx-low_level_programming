#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: string
 * Return: returns a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
		_putchar(*s);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

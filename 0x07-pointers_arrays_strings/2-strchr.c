#include "main.h"

/**
 * _strchr - searches for first occurence
 * @s: character s
 * @c: character c
 * Return: returns NUll
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}

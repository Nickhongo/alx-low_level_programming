#include "main.h"
/**
 * _strchr - this function locates a character in a string
 * @s: pointer s
 * @c: character c
 * Return: returns 0;
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}

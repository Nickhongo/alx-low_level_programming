#include "main.h"
/**
 * _memset - fills memory with const byte
 * @s : character s
 * @b: character b
 * @n: unsigned int
 * Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}

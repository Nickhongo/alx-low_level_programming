#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: returns NULL or Concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t x;
	size_t y;
	size_t total;
	char *concat;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	x = strlen(s1);
	y = strlen(s2);

	if (n >= y)
	{
		n = y;
	}

	total = x + n;

	concat = (char *)malloc(total + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	strcpy(concat, s1);
	strncat(concat, s2, n);

	return (concat);
}

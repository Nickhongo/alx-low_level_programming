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
	size_t len1;
	size_t len2;
	char *concat;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}

	concat = (char *)malloc(len1 + n + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	strncpy(concat, s1, len1);
	strncat(concat, s2, n);

	concat[len1 + n] = '\0';
	return (concat);
}

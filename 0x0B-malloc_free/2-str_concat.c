#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - cancatenates two strings
 * @s1: string number one
 * @s2: string number two
 * Return: returns NULL
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *concat;

	if (s1 == NULL)
		return (" ");
	if (s2 == NULL)
		return (" ");
	len1 = strlen(s1);
	len2 = strlen(s2);

	concat = (char *)malloc(len1 + len2 + 1);
	if (concat == NULL)
		return (NULL);
	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);
}

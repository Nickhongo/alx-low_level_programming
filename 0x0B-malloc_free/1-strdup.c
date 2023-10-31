#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space memory
 * @str: string
 * Return: returns NULL
 */
char *_strdup(char *str)
{
	size_t len;
	char *copy;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	copy = (char *)malloc(len + 1);

	if (copy == NULL)
		return (NULL);
	strcpy(copy, str);
	return (copy);
}

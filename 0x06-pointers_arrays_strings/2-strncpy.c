#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: new integer
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
		dest[i] = src[i];

		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	return (dest);
}
#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	int counter = 0;
	int myLength = 0;

	for (; dest[counter] != '\0'; counter++)
	{
		myLength++;
	}
	for (counter = 0; src[counter]; counter++)
	{
		dest[myLength] = src[counter];
		myLength++;
	}

	dest[myLength] = '\0';
	return (dest);
}

#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest : destination file to be stored
 * @src: source file to be copied
 * @n: number of bytes
 * Return: returns destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}

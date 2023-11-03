#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: array
 * @size: size bytes
 * Return: returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t totalMem;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	totalMem = (size_t)nmemb * size;
	ptr = malloc(totalMem);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, totalMem);
	return (ptr);
}

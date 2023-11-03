#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates memory block
 * @ptr: pointer
 * @old_size: allocated space for pointer
 * @new_size: new memory block
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int size;
	void *aptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	size = (old_size < new_size) ? old_size : new_size;

	aptr = malloc(new_size);
	if (aptr == NULL)
		return (NULL);
	memcpy(aptr, ptr, size);
	free(ptr);

	return (aptr);
}

#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: integer b
 * Return: returns pointer or NULL
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (unsigned int *) malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

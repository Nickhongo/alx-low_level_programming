#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: returns ptr or NULL
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

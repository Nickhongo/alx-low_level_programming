#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_array - creates an array of chars
 * @size: size of arrays
 * @c: character
 * Return: returns array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int j;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		array[j] = c;
	return (array);
}

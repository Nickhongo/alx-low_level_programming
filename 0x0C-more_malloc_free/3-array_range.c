#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * array_range - creates array of integers
 * @max: maximum
 * @min: minimum
 * Return: return NULL
 */
int *array_range(int min, int max)
{
	int range;
	int i;
	int *array;

	if (min > max)
		return (NULL);

	range = max - min + 1;
	array = (int *)malloc(range * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < range; i++)
	{
		array[i] = min + i;
	}
	return (array);
}


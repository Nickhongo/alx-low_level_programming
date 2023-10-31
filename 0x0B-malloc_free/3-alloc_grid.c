#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2D
 * @width: width
 * @height: height
 * Return: returns array
 */
int **alloc_grid(int width, int height)
{
	int a, b, **array;
	int len = width * height;

	if (len <= 0)
	{
		return (NULL);
	}
	array = (int **)malloc(width * sizeof(int *));

	if (array == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		array[a] = (int *)malloc(width * sizeof(int));

		if (array[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(array[b]);
			}
		free(array);
		return (NULL);
		}

	for (b = 0; b < width; b++)
	{
		array[a][b] = 0;
	}
	}
	return (array);
}

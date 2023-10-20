#include "main.h"
/**
 * reverse_array - reverses an aray
 * Return:returns 0
 * @a : reversed array
 * @n: number of element
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}

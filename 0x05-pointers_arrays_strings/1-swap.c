#include "main.h"
/**
 * swap_int - this function swaps values of two integers
 * @a: first swap value
 * @b:second swap value
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}

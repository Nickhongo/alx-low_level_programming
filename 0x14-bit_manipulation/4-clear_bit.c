#include "main.h"
/**
 * clear_bit - sets value of a bit to 0
 * @n: points to the value
 * @index: starts from 0  to the set bit
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}

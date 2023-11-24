#include "main.h"
/**
 * get_bit - returns value of a bit at a given index
 * @n: integer
 * @index: index start
 * Return: value of index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int position;
	int newValue;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	position = n >> index;
	newValue = position & 1;

	return (newValue);
}

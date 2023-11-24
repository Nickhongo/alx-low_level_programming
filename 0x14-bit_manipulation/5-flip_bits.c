#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 *
 * @n: points to the bit
 * @m: index at the bit
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count = 0;

	result = n ^ m;

	while (result > 0)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}

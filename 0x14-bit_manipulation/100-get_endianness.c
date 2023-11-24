#include "main.h"
/**
 * get_endianness - checks endianness
 * @void: has no parameter
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c;

	c = (char *) &i;
	if (*c == 1)
		return (1);
	else
		return (0);
	return (0);
}

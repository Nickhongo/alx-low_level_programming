#include "main.h"
/**
 * binary_to_uint  - converts binary to unsigned int
 * @b: points to string 0 and 1
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binary = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			binary = (binary << 1) | (b[i] - '0');
			i++;
		}
		else
			return (0);
	}
	return (binary);
}

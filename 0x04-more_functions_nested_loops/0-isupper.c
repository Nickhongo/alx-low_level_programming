#include "main.h"
/**
 * _isupper - checks for uppercasr character
 * @c: gives no parameters
 * Return: returns 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}

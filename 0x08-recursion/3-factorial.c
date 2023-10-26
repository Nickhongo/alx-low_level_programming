#include "main.h"
/**
 * factorial - function returns factorial of a number
 * @n: the number
 * Return: -1 indicating error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

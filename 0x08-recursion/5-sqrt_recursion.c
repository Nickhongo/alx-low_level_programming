#include "main.h"
/**
 * num - finds sq of natural numbers
 * @n:natural number
 * @sqR: square root
 * Return: returns -1 or 1
 */
int num(int n, int sqR)
{
	if (n * n == sqR)
		return (n);
	if (n == sqR)
		return (-1);
	return (1 * num(n + 1, sqR));
}
/**
 * _sqrt_recursion - returns natural sq root
 * @n: number
 * Return: return natural sq root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (num(1, n));
}

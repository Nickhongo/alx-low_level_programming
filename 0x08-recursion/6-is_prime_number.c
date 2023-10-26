#include "main.h"
/**
 * is_prime_number - checks for prime number
 * check_prime - checks for prime
 * @n: integer checked
 * Return: returns 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (another_prime(n, n - 1));
}
/**
 * another_prime - calculates if a number is prime recur
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int another_prime(int n, int i)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	if (n % i != 0)
	return (another_prime(n, i - 1));
}

#include "main.h"
#include <string.h>
/**
 * is_prime_number - checks for prime number
 * check_prime - checks for prime
 * @n: integer checked
 * Return: returns 0
 */
int is_prime_number(int n)
{
	int primeNumber = 0;

	if (n < 2)
		primeNumber = 0;
	else if (n == 2)
		primeNumber = 1;
	else if (n % 2 == 1)
		primeNumber = 1;
	return (primeNumber);
}

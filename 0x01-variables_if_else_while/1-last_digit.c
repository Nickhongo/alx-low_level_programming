#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - 'main' entry point
 * @void: empty parameter list
 * Description:"main" serves as the entry point to a C program
 * int main(void):main function does not accept parameters
 * Return: always 0 (correct)
 */
int main(void)
{
		int n;
		int ld;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				ld = n % 10;
				if (ld > 5)
					printf("Last digit of %d is %d and is greater than 5\n", n, ld);
				if (ld == 0)
					printf("Last digit of %d is %d and is 0\n", n, ld);
				if (ld < 6 && ld != 0)
					printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);

				return (0);
}

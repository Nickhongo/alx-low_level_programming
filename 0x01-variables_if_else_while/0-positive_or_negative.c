#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main -'main' entry point
 * Description:"main" serves as the entry point for the C program
 * int main(void): main function doesnt accept any parameters
 *Return:always 0 (success)
 */

/* betty style doc for function main goes there */
/*for the program. It initializes variables, performs necessary setup, and executes the core logic of the program*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("n is positive\n");
	}
	else if (n == 0)
	{
		printf("n is zero\n");
	}
	else
	{
		printf("n is negative\n");
	}
	return (0);
}

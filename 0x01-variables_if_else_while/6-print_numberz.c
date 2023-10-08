#include <stdio.h>
/**
 * main - 'main' entry point
 * @void: has no pparameters
 * int main(void) - serves no parameters
 * Description: "main" serves as an entry point of the C program
 * Return: always 0 (success)
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);
	}

	putchar('\n');

	return (0);

}

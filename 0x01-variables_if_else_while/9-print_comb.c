#include <stdio.h>
/**
 * main - 'main' entry point
 * @void: empty parameter list
 * Description:"main" serves as the entry point of a C program
 * int main(void): main function doesnt accept any parameters
 * Return: always 0 (success)
 */

int main(void)
{
	int singleDigit;

	for (singleDigit = 0; singleDigit <= 9; singleDigit++)
	{
		putchar(singleDigit + '0');
		if (singleDigit < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - 'main entry point
 * @void : main has no parameters
 * int main (void): does not have parameters
 * Description: "main" serves as the entry point to a C program
 * Return: is a success (0)
 */
int main(void)
{
	int i;
	int n;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}

	for (n = 0; n < 6; n++)
	{
		putchar('a' + n);
	}

	putchar('\n');

	return (0);
}

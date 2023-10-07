#include <stdio.h>
/**
 * main - 'main' entry point
 * @void: empty parameter list
 * DEscription: "main" sserves as the entry point of a C program
 * int main(void):main function does not accept any parameters
 * Return: always 0 (success)
 */
int main(void)
{
	char lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}

	putchar('\n');

	return (0);
}

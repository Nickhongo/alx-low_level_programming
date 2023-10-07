#include <stdio.h>
/**
 * main - 'main' entry point
 * @void: empty parameter
 * *Description: "main" serves as an entry point of a C program
 * int main(void) main function does not accept any parameters
 * Return: always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}

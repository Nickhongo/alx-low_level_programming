#include <stdio.h>
/**
 * main - 'main' entry point
 * @void: accepts no parameters
 * int main(void):main function accepts no parameters
 * Description: "main" serves as the entry point of a C program
 * Return:always a success (0)
 */
int main(void)
{
	char letters;

	for (letters = 'z' ; letters >= 'a' ; letters--)
	{
		putchar(letters);
	}

	putchar('\n');

	return (0);

}

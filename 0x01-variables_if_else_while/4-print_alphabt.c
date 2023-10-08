#include <stdio.h>
/**
 * main - 'main'entry point
 * @void: has no parameters
 * Description: "main" serves as the entry point of a C program
 * int main(void) : main function does not accept any parameters
 * Return:always a success (0)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q'  && letter != 'e')
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}

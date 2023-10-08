#include <stdio.h>
/**
 * main - 'main' is the entry point
 * @void: has no parameters
 * Description: "main" serves as an entry point to the program C
 * int main(void): serves no parameters
 * Return: always 0(success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		printf("%d", number);
	}

	printf("\n");

	return (0);

}

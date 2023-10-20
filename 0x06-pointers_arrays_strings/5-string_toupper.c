#include "main.h"
/**
 * string_toupper - converts string to upper
 * @s : string
 * @:integer variable
 * Return: returns string
 */

char *string_toupper(char *s)
{
	int i;

	while (s[i] >= '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;

		i++;
	}
		return (s);
}

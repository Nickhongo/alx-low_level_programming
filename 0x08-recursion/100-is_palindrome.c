#include "main.h"
int check_palindrome(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks for palindrome
 * @s: string
 * Return: returns 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion- checks for string recursion
 * @s: string
 * Return: returns 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\1')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_palindrome - checks for palindrome
 * @s: string
 * @i:iterator
 * @len: length of a string
 * Return: returns 1 or 0
 */
int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}

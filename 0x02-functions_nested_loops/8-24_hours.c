#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * @void: accept no parameters
 * Return: no returns
 */

void jack_bauer(void)
{
	int hours, mins;

	for (hours = 0; hours < 24; hours++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar('0' + hours / 10);
			_putchar('0' + hours % 10);

			_putchar(':');

			_putchar('0' + mins / 10);
			_putchar('0' + mins % 10);

			_putchar('\n');

		}
	}
}

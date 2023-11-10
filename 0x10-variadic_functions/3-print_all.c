#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @*: characters
 * @format: list of types
 * Return: returns nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, state;
	char *str;
	va_list args;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				state = 0;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				state = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				state = 0;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				state = 0;
				break;
			default:
				state = 1;
				break;
		}
		if (format[i + 1] != '\0' && state == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}

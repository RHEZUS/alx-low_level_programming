#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: ....
 * @n: the number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char *));

		if (i < n - 1 && separator != NULL)
			putchar(*separator);
		if (i < n - 1)
			putchar(' ');
	}
	va_end(args);
	putchar('\n');
}

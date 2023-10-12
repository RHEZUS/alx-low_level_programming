#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the separator
 * @n: the number of arguments
 */



void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);

		if (i < n - 1 && separator != NULL)
			putchar(*separator);
		if (i < n - 1)
			putchar(' ');
	}
	va_end(args);
	putchar('\n');
}

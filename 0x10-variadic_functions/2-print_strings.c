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
	char *str;

	va_start(args, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (i < n - 1)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(args);
}

#include "main.h"

/**
 * print_line - prints lines
 * @n: the number of line
 */

void print_line(int n);

void print_line(int n)
{
	while (n-- > 0)
		_putchar('_');
}

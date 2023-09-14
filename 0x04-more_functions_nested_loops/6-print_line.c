#include "main.h"

/**
 * print_line - prints lines
 * @n: the number of line
 */

void print_line(int n);

void print_line(int n)
{
	int i;
	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}

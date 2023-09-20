#include "main.h"

/**
 * print_number - print an integer
 * @n: the number to be printed
 */

void print_number(int n);
void print_number(int n)
{
	unsigned int temp = n;

	if (n < 0)
	{
		temp = -temp;
		_putchar('-');
	}

	if (temp / 10)
	{
		print_number(temp / 10);
	}
	_putchar(temp % 10 + '0');
}

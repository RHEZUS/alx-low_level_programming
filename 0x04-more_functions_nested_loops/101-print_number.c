#include "main.h"

/**
 * print_number - print an integer
 * @n: the number to be printed
 */

void print_number(int n);
void print_number(int n)
{
	int temp;

	if (n < 0)
	{
		temp = -1 * n;
		putchar('-');
	}
	else
	{
		temp = n;
	}

	if (temp > 1000)
	{
		_putchar((temp / 1000) % 10 + '0');
	}
	if (temp > 100)
	{
		_putchar((temp / 100) % 10 + '0');
	}
	if (temp > 10)
	{
		_putchar((temp / 10) % 10 + '0');
	}
	_putchar(temp % 10 + '0');
}

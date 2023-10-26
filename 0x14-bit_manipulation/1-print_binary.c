#include "main.h"

/**
 * checkLen - checks the binary length of an integer
 * @n: the integer
 * Return: the length of the intger
 */

int checkLen(unsigned long int n)
{
	int i = 0;

	while (n)
	{
		i++;
		n >>= 1;
	}
	return (i);
}

/**
 * print_binary -  prints the binary representation of a number.
 * @n: the number
 */


void print_binary(unsigned long int n)
{
	int i;

	if (n == 0)
		_putchar('0');

	for (i = checkLen(n) - 1; i >= 0; i--)
	{
		if (n & (1 << i))
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}

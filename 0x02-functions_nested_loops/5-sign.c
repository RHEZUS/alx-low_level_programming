#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number which sign will be printed
 * Return: 1 if positiv, 0 if null and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

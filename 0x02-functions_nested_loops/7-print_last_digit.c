#include "main.h"

/**
 * print_last_digit - prints last gigit of number
 * @num: number which last digit is printed
 * Return: lastd digit of number
 */
int print_last_digit(int num)
{
	int lastd = num % 10;

	if (lastd < 0)
		lastd *= -1;
	_putchar(lastd + '0');
	return (lastd);
}

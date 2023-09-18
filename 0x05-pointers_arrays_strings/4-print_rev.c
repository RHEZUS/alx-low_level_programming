#include "main.h"

/**
 * print_rev - prints a string reversely
 * @s: the srting to be printed
 */


void print_rev(char *s)
{
	char *str = s;
	int i = 0;

	while (str[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}

	_putchar('\n');
}

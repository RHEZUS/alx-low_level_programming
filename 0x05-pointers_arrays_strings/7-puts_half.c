#include "main.h"

/**
 * puts_half - prints the half of a string
 * @str: the string which half will be calculated
 */


void puts_half(char *str)
{
	char *s = str;
	int i = 0, n = 0;

	while (s[i] != '\0')
		i++;
	if (i % 2 == 0)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
